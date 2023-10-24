#include <stdio.h>

char lowerTOupper(char lc);

int main()
{
    char character='0';
    printf("Enter the character:\n");
    scanf(" %c",&character);
    lowerTOupper(character);

    return 0;
}

char lowerTOupper(char lc)
{
    char upc = '0';
    int ascii = lc;
    upc = ascii - 32;
    printf("the uppercase: %c",upc);
}
