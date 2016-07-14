// Asks user for the time they spend in the shower (in minutes)
// Outputs how much water bottles' worth of water they waste



#include <stdio.h>
#include <cs50.h>

int main(void)
{   
    int shower_time;
    
    printf("Please input your shower time (in minutes): \n");
    
    do { shower_time = GetInt(); }
    while (shower_time <= 0);
    
    printf("Wow! You waste  the equivalent of\n");
    printf("%d bottles of water every time you shower!\n", shower_time * 12);
    
    return 0;
}
