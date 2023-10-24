#include <stdio.h>
#include <math.h>

int power(int num);
int main()
{
    int num = 0;
    printf("Enter the number:\n");
    scanf("%d",&num);
    if(1 == power(num))
    {
        printf("number is not power of 2.\n");
    }
    else
    {
        printf("number is power of 2.\n");
    }

    return 0;
}

int power(int num)
{
    if(0 == num)
    {
        return 1;
    }
    while(num != 1)
    {
        if(0 != num%2)
        {
            return 1;
        }
        num /=2;
    }
    return 0;
}
