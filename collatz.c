#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int getStart() 
{
    int startNum;
    bool good = false;
    do 
    {
        printf("Enter the starting number: ");
        scanf("%d", &startNum);
        if (startNum <= 0) 
        {
            printf("Starting number must be positive\n");
        }
        else 
        {
            good = true;
        }
    } while (good == false);
    return startNum;
}

int nextCollatz(int x) 
{
    // determine if integer is odd or even
    if (x % 2 == 0) 
    {
        //even
        return (x/2);
    }
    else 
    {
        //odd
        return ((x*3)+1);
    }
}

int main() 
{
    // start by getting num
    int num = getStart();
   

    int count = 1; // count # of loops
    printf("Collatz sequence: ");
    printf("%d", num);
    while (num != 1) // pass num into collatz and loop until 1
    {
        num = nextCollatz(num);
        printf(", %d", num);
        count++;
    }
    printf("\nLength: %d\n", count);
}