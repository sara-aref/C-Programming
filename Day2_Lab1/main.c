#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;
    printf("Enter the number:\n");
    scanf("%d",&num);

    if(num>0)
    {
        printf("Number is positive.\n");
    }
    else if(num<0)
    {
        printf("Number is negative.\n");
    }
    else
    {
        printf("number is Zero");
    }
    return 0;
}
