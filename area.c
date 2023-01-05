#include <stdio.h>

int main() 
{
    printf("Enter the height and width of a rectangle: ");
    int height, width;
    scanf("%d %d", &height, &width);
    int area = height * width;
    printf ("The area is %d sq in.\n", area);
}
