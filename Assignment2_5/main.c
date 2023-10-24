#include <stdio.h>
#include <stdlib.h>

int evenodd(int num);
int main()
{
    int num = 0;
    printf("enter the number:\n");
    scanf("%d",&num);

    if(evenodd(num))
    {
        printf("Number is odd");
    }
    else
    {
        printf("Number is even");
    }

    return 0;
}

int evenodd(int num)
{
    if(0 == num%2)
    {
        return 0;
    }
    else
    {
        return 1;
    }
}
