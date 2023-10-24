#include <stdio.h>
#include <stdlib.h>
int prime(int num);
int main()
{
    int num = 0;
    printf("enter the first number:\n");
    scanf("%d",&num);
    prime(num);
    return 0;
}
int prime(int num)
{
    int flag = 1;
    if((0 == num) || (1 == num))
    {
        flag = 0;
    }
    else
    {
        for(int i=2; i<num;i++)
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
