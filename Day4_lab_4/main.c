//- C Program to take char and displays if it is "Normal or Extended key" along with its Ascii value.
#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter character: \n");
    char key = getch();
    if(-32 == key)
    {
        printf("Extented.\n");
        key = getch();
        printf("%d",key);
    }
    else
    {
        printf("Normal key: %d\n",key);
    }
    return 0;
}
