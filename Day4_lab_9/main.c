//C Program to Find the Length of a String without Using strlen()

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100];
    int i = 0, c = 0;

    printf("Enter the string: ");
    scanf("%s", s1);

    for (i = 0; s1[i] != '\0'; i++) {
        c++;
    }
    printf("The length of the string: %d",c);
    return 0;
}
