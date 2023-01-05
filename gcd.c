#include <stdio.h>

int main() 
{
    printf("Enter two positive integers: ");
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int count;
    if (num1 > num2) 
    {
        count = num1;
    }
    else 
    {
        count = num2;
    }
    
    int gcd;
    while (count > 0) 
    {
        if(num1%count == 0 && num2%count == 0) 
        {
            gcd = count;
            break;
        }
        count--;
    }
    printf("GCD is %d\n", gcd);
}