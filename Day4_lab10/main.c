//- C Program to Remove all Characters in a String Except Alphabet.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s1[100], s2[100];
    int j=0;

    printf("Enter the string: ");
    scanf("%s", s1);

    for (int i = 0; s1[i] != '\0'; i++)
    {
        if(((s1[i]>='a') && (s1[i]<='z')) || ((s1[i]>='A') && (s1[i]<='Z')))
        {
            s2[j] = s1[i];
            j++;
        }
    }
    s2[j] = '\0';
    printf("The string: %s",s2);
    return 0;
}
