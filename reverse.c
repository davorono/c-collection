#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> 
// Function prototypes
int getInt(char prompt[], int min, int max);
void fillBoard(int arr[], int len);
void printBoard(int arr[], int len);
void shuffleBoard(int arr[], int len);
void reverse(int arr[], int len);
int isSorted(int arr[], int len);

int main() 
{
    // Seed random number generator
    srandom(time(NULL));

    // Prompt user
    int boardLength = getInt("Enter size of board: ", 3, 20);

    // Create board
    int board[boardLength];

    // Fill board
    fillBoard(board, boardLength);

    // Shuffle board
    while ((isSorted(board, boardLength)) == 1) 
    {
        shuffleBoard(board, boardLength);
    }

    // Print board
    printBoard(board, boardLength);

    // Gameplay
    int gameOver = 0;
    int moves = 0;
    while (!gameOver)
    {
        // Ask user for amount to reverse
        int amt = getInt("How many to reverse? ", 2, boardLength);
        
        // Reverse the first (amt) numbers
        reverse(board, amt);
        
        // Print the board
        printBoard(board, boardLength);
        
        // Check to see if the game is over
        gameOver = isSorted(board, boardLength);
        
        moves++;
    }
    printf("You won in %d moves!\n", moves);

}

int getInt(char prompt[], int min, int max) 
{
    int length = 0;
    printf("%s", prompt);
    scanf("%d", &length); 
    while (length < min || length > max) 
    {
        printf("Value must be in the range %d-%d\n", min, max);
        printf("%s", prompt);
        scanf("%d", &length); 
    }
    return length;
}

void fillBoard(int arr[], int len) 
{
    for (int i = 0; i < len; i++) 
    {
        arr[i] = i+1;
    }
}

void printBoard(int arr[], int len) 
{
    printf("Board: ");
    for(int i = 0; i < len; i++) 
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int isSorted(int arr[], int len) 
{
    for (int i = 0; i < len-1; i++) 
    {
        if (arr[i] > arr[i+1]) 
        {
            return 0;
        }
    }
    return 1;
}

void shuffleBoard(int arr[], int len) 
{
    for (int i = len-1; i > 0; i--) 
    {
        int r = rand() % (i+1);
        int temp = arr[r];
        arr[r] = arr[i];
        arr[i] = temp;
    }
}

void reverse(int arr[], int len) 
{
    for (int i = 0; i < len/2; i++) 
    {
        int temp = arr[0+i];
        arr[0+i] = arr[len-i-1];
        arr[len-i-1] = temp;
    }

}