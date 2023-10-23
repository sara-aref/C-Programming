// C Program to take firstName and lastName from user, then displays fullName.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char F_name[20], L_name[20];
    printf("Enter first name:\n");
    scanf("%s",F_name);
    printf("Enter second name:\n");
    scanf("%s",L_name);
    printf("The full name: %s %s",F_name,L_name);
    return 0;
}
