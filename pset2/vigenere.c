#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    
    tolower(atoi(argv[1]));
    printf("What do you want to encrypt?: \n");
    string p = GetString();
    int j = 0;
    for (int i = 0, n = strlen(p); i < n; i++) 
    {
        if (isalpha(p[i]))    
        {   
            if (isupper(p[i]))
            {
                printf("%c", ((p[i] - 65) + (argv[1][j % strlen(argv[1])] - 97)) % 26 + 65);    
            }
            else if (islower(p[i]))
            {
                printf("%c", ((p[i] - 97) + (argv[1][j % strlen(argv[1])] - 97)) % 26 + 97);
            }
            j++;
        }
            else
            {
                printf("%c", p[i]);
            }
                
     }
     printf("\n");
} 
