#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    
    do
    {
    printf("How tall should the half-pyramid be? Give me a number between 0 and 23: \n");
    height = GetInt();
    }
    while (0 > height || height > 23);
    
    for (int i = 0; i < height; i++)
    {
        for (int x = 0; x < height - i - 1; x++)
            printf(" ");
        for (int y = 0; y < i + 2; y++)
            printf("#");
        printf("\n"); 
    }
}
