#include <stdio.h>

int getAmount()
{
    int amount;
    printf ("Enter a dollar amount:");
    scanf ("%d", &amount);
    while (amount < 1) {
        printf("Please enter a positive number\n");
        printf("Enter a dollar amount: "); 
        scanf("%d", &amount);
    }
    return amount;
}

int bills(int amount)
{
    int hcount = 0; // hundred count
    int twcount = 0; // twenty count
    int tcount = 0; // ten count
    int fcount = 0; // five count
    int ocount = 0; // one count
    
    // hundreds
    if (amount - 100 > 0) 
    {
        do
	    {
	        amount = amount - 100;
	        hcount++;
	    } while (amount - 100 > 0);
    }
    
    // twenties
    if (amount - 20 > 0) 
    {
        do 
        {
            amount = amount - 20;
            twcount++;
        } while (amount - 20 > 0);
    }
    
    // tens
    if(amount - 10 > 0) 
    {
        do 
        {
            amount = amount - 10;
            tcount++;
        } while (amount - 10 > 0);
    }
    
    // fives
    if (amount - 5 > 0) {
        do 
        {
            amount = amount - 5;
            fcount++;
        } while (amount - 5 > 0);
    }

    // ones
    if (amount - 1 > 0 ) {
        do 
        {
            amount = amount - 1;
            ocount++;
        } while(amount - 1 > 0);
    }

  int sum = hcount + twcount + tcount + fcount + ocount + 1;
  return sum;
}


int main ()
{
  int amount = getAmount ();
  printf("You get %d bills back.\n",bills(amount));
  return 0;
}