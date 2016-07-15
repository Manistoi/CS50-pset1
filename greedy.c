/*

Asks user for a dollar amount, and gives back change using
the least number of coins possible

*/



#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    int quarters = 0;
    int dimes = 0;
    int nickels = 0;
    int pennies = 0;
    
    printf("Input dollar amount: \n");   //Store dollar amount as float
    float money = GetFloat();
     
    while (money < 0)                        //Ensure's user's input is > 0
    {
        printf("Input dollar amount: \n");
        money = GetFloat();
    }
   
     
    money = round(money * 100);  // To avoid rounding errors, we round the inputed money
                                 // Multiply by 100 for convenience 
    while (money > 0) 
     {   
         if (money >= 25)
            {
                 money = money - 25;
                 quarters++;
            }
    
         else if (money >= 10)
            {
                 money = money - 10;
                 dimes++;
            }
    
         else if (money >= 5)
            {
                money = money - 5;
                nickels++;
            }
         else if (money < 5)
            {
                money = money - 1;
                pennies++;
            }
          
     } 
    
    printf("Here's your change: \n");
    printf("%i quarters, %i dimes, %i nickels, %i pennies!\n", quarters, dimes, nickels, pennies);
    
    return 0;
    
    
}
