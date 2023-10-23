#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=0, num2=0,num3=0;
    printf("print the 3 numbers:\n");
    scanf("%d %d %d",&num1 ,&num2 ,&num3);

    if((num1 > num2) && (num1 > num3))
    {
        printf("num %d is the largest\n",num1);
    }
    else if((num2 > num1) && (num2 > num3))
    {
        printf("num %d is the largest\n",num2);
    }
    else
    {
        printf("num %d is the largest\n",num3);
    }
    return 0;
}
