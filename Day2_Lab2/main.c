#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    printf("Enter the number:\n");
    scanf("%d",&num);

    if(0 == num%2)
    {
        printf("Number is even.\n");
    }
    else
    {
        printf("Number is odd.\n");
    }
    return 0;
}
