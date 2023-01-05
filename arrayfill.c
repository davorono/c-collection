#include <stdio.h>

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
    // declare array
    int array[40];
    // elements 0-9
    for(int i = 0; i < 10; i++) 
    {
        array[i] = i;
    }

    // elements 10-19
    for(int i = 10; i < 20; i++) 
    {
        array[i] = (10*i);
    }

    // elements 20-25
    array[20] = 4;
    array[21] = 8;
    array[22] = 15;
    array[23] = 16;
    array[24] = 23;
    array[25] = 42;

    // elements 26-39
    int num = 7;
    int i = 26;

    while(num != 1 && i < 40) 
    {
        array[i] = num;
        num = nextCollatz(num);
        i++;
    }


    // print array
    for(int i = 0; i < 40; i++) 
    {
        printf("%d ",array[i]);
    }
    printf("\n");

}