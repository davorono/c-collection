#include <stdio.h>
#include <stdlib.h>

void getPrices(float *a, float *b, float *c);
void swap(float *a, float *b);

int main() 
{
    float a,b,c;
    getPrices(&a,&b,&c);
    printf("The three prices are: %f %f %f\n", a, b, c);
}

void getPrices(float *a, float *b, float *c) 
{
    printf("Enter the price of item 1: ");
    scanf("%f", a);
    printf("Enter the price of item 2: ");
    scanf("%f", b);
    printf("Enter the price of item 3: ");
    scanf("%f", c);
    
    if (*a > *b) 
    {
        swap(a, b);
    }
    if (*b > *c) 
    {
        swap(c, b);
    }
    if (*a > *b) 
    {
        swap(a, b);
    }
}

void swap(float *a, float *b) 
{
    float temp = *a;
    *a = *b;
    *b = temp;
}