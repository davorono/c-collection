#include <stdio.h>
#include <stdlib.h>

int main () 
{
    char input[20];
    int hour;
    int minute;
    int twelvehour;
    char time;
    do 
    {
        printf("Enter your time: ");
        scanf("%s", input);
        sscanf(input, "%d:%d", &hour, &minute);
    } while (hour > 23 || hour < 0 || minute > 59 || minute < 0);
    //printf("hours: %d, minutes: %d", hour, minute);
    twelvehour = hour%12;
    if (hour == 0) 
    {
        twelvehour = 12;
    }
    if (hour > 11) 
    {
        time = 'p';
    }
    else 
    {
        time = 'a';
    }
    
    if (minute < 10) 
    {
        printf("%d:0%d %cm\n", twelvehour, minute, time);
    }
    else 
    {
        printf("%d:%d %cm\n", twelvehour, minute, time);
    }
    
}