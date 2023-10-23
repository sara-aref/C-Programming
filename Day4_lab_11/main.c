//- C Program to Covert all Characters in a String to Capital Case.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100], s2[100];
    int ascii = 0;
    int j = 0;

    printf("Enter the string: ");
    scanf("%s", s1);

    for (int i = 0; s1[i] != '\0'; i++)
    {
        if ((s1[i] >= 'a') && (s1[i] <= 'z'))
        {
            ascii = s1[i];
            s2[j] = ascii - 32;
            j++;
        }
        else
        {
            printf("Please enter alphabet only.\n");
            return;
        }
    }

    s2[j] = '\0';
    printf("The uppercase: %s\n", s2);
    return 0;
}
