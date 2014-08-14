#include <stdio.h>
#include <cs50.h>

int main(void)
{   
    printf("What is your name?\n");
    string name = GetString(); 
    printf("hello, %s\n", name);
}
