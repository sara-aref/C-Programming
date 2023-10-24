#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, flag = 0;

    printf("enter the number: \n");
    scanf("%d",&num);

    if(num >= 0)
    {
        for(int i=1; i*i<=num; i++)
        {
            if(num == i*i)
            {
                flag = 1;
            }
        }
    }
    else
    {
        printf("please enter a positive number.\n");
    }

    if(1 == flag)
    {
        printf("The number is perfect square.\n");
    }
    else
    {
        printf("The number is not perfect square.\n");
    }
    return 0;
}
