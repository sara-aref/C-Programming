#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 5;
    int num2 = 2;
    int num3 = 10;

    if((num1>num2) && (num1>num3))
    {
        printf("The largest number = %d\n",num1);
    }
    else if((num2>num1) && (num2>num3))
    {
        printf("The largest number = %d\n",num2);
    }
    else
    {
        printf("The largest number = %d\n",num3);
    }

    return 0;
}
