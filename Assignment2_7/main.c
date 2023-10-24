#include <stdio.h>
#include <stdlib.h>

int multiple(int num1, int num2);

int main()
{
    int num1 = 0, num2 = 0;
    printf("Enter number 1:\n");
    scanf("%d",&num1);
    printf("Enter number 2:\n");
    scanf("%d",&num2);

    multiple(num1,num2);
    return 0;
}

int multiple(int num1, int num2)
{
    if(0 == num1 % num2)
    {
        printf("the first number is multiple of the second number.\n");
    }
    else
    {
        printf("the first number is not multiple of the second number.\n");
    }
}
