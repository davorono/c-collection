#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char * argv[]) 
{
    // Check for arguments
    if (argc == 2) 
    {
        printf("Missing command line arguments.\n");
        exit(1);
    }

    // Open the file and check if it opened properly
    FILE *in = fopen(argv[2], "r");
	if (!in)
	{
	    perror("Error opening file");
	    exit(1);
	}

    char temp[100];
    while (fgets(temp, 100, in) != NULL) 
    {
        if ((strstr(temp, argv[1])) != NULL) 
        {
            printf("%s", temp);
        }
    }
}