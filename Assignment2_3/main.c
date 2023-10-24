#include <stdio.h>
#include <stdlib.h>

int PorN(int num);

int main()
{
    int num = 0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    PorN(num);
    return 0;
}

int PorN(int num)
{
    if(num > 0)
    {
        printf("number is positive.\n");
    }
    else if(num < 0)
    {
        printf("number is negative.\n");
    }
    else
    {
        printf("number is zero.\n");
    }
}
