//- C Program to Copy String Without Using strcpy()

#include <stdio.h>

int main() {
    char s1[100], s2[100];
    int i = 0;

    printf("Enter the string: ");
    scanf("%s", s1);

    for (i = 0; s1[i] != '\0'; i++) {
        s2[i] = s1[i];
    }
    s2[i] = '\0';

    printf("The copied string: %s\n", s2);
    return 0;
}
