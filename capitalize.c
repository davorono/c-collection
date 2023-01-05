#include <stdio.h>

void capitalize(char str[]) 
{
    for (int i = 0; str[i] != '\0'; i++) // loop through every array element until end of string
    {   
        if (str[i-1] == ' ' || i == 0) // check to see if value is beginning of a word OR is the first letter
        {
            if (str[i] >= 97 && str[i] <= 122) // do not try to capitalize already capitalized letters
            {
                str[i] = (str[i]-32); // capitalize letter by subtracting 32 from it's ASCII value
            }
        }
        
        else if (str[i-1] != ' ' || i != 0) 
        {          
            if (str[i] >= 65 && str[i] <= 90) // make sure only the first letter of word is capitalized by removing potential capitalization from other character's in the word
            {
                str[i] = (str[i] + 32); // lowercase letter by adding 32 from it's ASCII value
            } 
        } 
       
    }
}

int main() 
{

    char str[100]; 
    printf("Please enter your string: ");
    fgets(str,100,stdin); // get user input for string
    capitalize(str); // pass into function
    printf("%s ",str); // print resulting string
    printf("\n");
}