#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    int k = atoi(argv[1]);
    if (k <= 0)
    {
        return 1;
    }
    printf("What do you want to encrypt?: \n");
    string p = GetString();
    for (int i = 0, n = strlen(p); i < n; i++)
    {
        if (isalpha(p[i]))
        {
            if (isupper(p[i]))
            {
            printf("%c", (((p[i] - 65) + k) % 26 + 65));    
            }
            else if (islower(p[i]))
            {
            printf("%c", (((p[i] - 97) + k) % 26 + 97));
            }
        }
        else
        {
            printf("%c", p[i]);
        }
    }
    printf("\n");
} 
