#include <stdio.h>

int main() 
{
    printf("This program will sum two fractions.\n");
    int n1, d1, n2, d2; 
    printf("Input the first fraction: ");
    scanf("%d/%d", &n1, &d1);
    printf("Input second fraction: ");
    scanf("%d/%d", &n2, &d2);
    int commonDenominator = d1*d2;
    int sum = (d1*n2)+(d2*n1);
    printf("The sum is: %d/%d\n", sum, commonDenominator);
}
