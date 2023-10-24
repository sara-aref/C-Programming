#include <stdio.h>
#include <stdlib.h>

char checkchar(char c);
int main()
{
    int character;
    printf("Enter the character:\n");
    scanf("%c",&character);
    checkchar(character);
    return 0;
}

char checkchar(char c)
{
    if((('a' <= c) && (c <= 'z')) || (('A' <= c) && (c <= 'Z')))
    {
        printf("Character is alphabet");
    }
    else
    {
        printf("Character is not alphabet");
    }
}
