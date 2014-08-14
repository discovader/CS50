#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("Give me a number between 1 and 3: \n");
    int n = GetInt ();
    if (n == 1)
    {
        printf("You chose 1!\n");
    }
    else if (n == 2)
    {
        printf("You chose 2!\n");
    } 
    else
    {
        printf("You chose 3!\n");
    }   
}
