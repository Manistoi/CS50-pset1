//Asks user input for a pyramid height
//Prints out a mario-type pyramid using the height given


#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    printf("Please input a height: (0,23] \n");
    
    //ensures proper usage 
    // 0 < height < 24
    do { 
        printf("height: ");
        height = GetInt(); }
    while (height <= 0 || height > 23);
    
    
    int height2 = height;
    
    // Building the pyramid
    for (int i = 0; i < height; i++)
    {
        for (int j = 0 + i; j < height - 1; j++)
            {
                printf(" ");
            }
        
        for (int k = height2 - 2; k < height; k++)
        {
            printf("#");
        }
        height2--;
        
        
        printf("\n");
    }
    
    return 0;
    
}
