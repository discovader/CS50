#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;
    
    do
    {
    printf("How tall should the pyramid be? Give me a number between 0 and 23: \n");
    height = GetInt();
    }
    while (0 > height || height > 23);
    
    for (int i = 0; i < height; i++)
    {
        for (int x = 0; x < height - i - 1; x++)
            printf(" ");
        for (int y = 0; y < i + 1; y++)
            printf("#");
        for (int z = 0; z < 2; z++)
            printf(" ");
        for (int a = 0; a < i + 1; a++)
            printf("#");
        for (int b = 0; b < height - i - 1; b++)
            printf(" ");
        printf("\n"); 
    }
}
