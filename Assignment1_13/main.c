#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, flag = 1;
    printf("Enter the number: \n");
    scanf("%d",&num);
    if(num > 0)
    {
        if((0 == num) || (1 == num))
        {
            flag = 0;
        }
        else
        {
            for(int i=2; i<num; i++)
            {
                if(0 == num%i)
                {
                    flag = 0;
                }
            }
        }
        if(1 == flag)
        {
            printf("number is prime.\n");
        }
        else
        {
            printf("number is not prime.\n");
        }
    }
    else
    {
        printf("please enter positive number.\n");
    }

    return 0;
}
