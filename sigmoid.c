#include <stdio.h>
#include <math.h>

float sigmoid(float x) 
{
    x = 1/(1 + exp(-x));
    return x;
}

int main() 
{
    for (float x = -5; x <= 5; x++) 
    {
        printf("%.3f %.3f\n", x,sigmoid(x));
    }
}

