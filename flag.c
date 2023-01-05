#include <stdio.h>

int main() 
{
    int flgh;
    int count=0;
    printf("Enter the height of the flag pole ");
    scanf("%d", &flgh);
    if (flgh > 2 && flgh < 15) 
    {
        printf("|-----+\n");
        printf("|     |\n");
        printf("|-----+\n");
        while(count < flgh-3) 
        {
            printf("|\n");
            count++;
        }
    }
    else printf("Number out of range\n");
    return 0;
}