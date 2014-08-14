#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    float change;
    
    do
    {
    printf("How much change is owed?: \n");
    change = GetFloat();
    }
    while (0 > change);
    
    int i = (int) round (change * 100);
    
        int q = 0;
        int d = 0;
        int n = 0;
        int p = 0;
        
        while (i - 25 * q >= 25)
        {
            q++;
        }
        while (i - 25 * q - 10 * d >= 10)
        {
            d++;
        }
        while (i - 25 * q - 10 * d - 5 * n >= 5)
        {
            n++;
        }
        while (i - 25 * q - 10 * d - 5 * n - p > 0)
        {
            p++;
        } 
    
    printf("%i\n", q + d + n + p);
 
}
