#include <stdio.h>
#include <stdlib.h>
int swap(int num1, int num2);
int main()
{
    int num1=0,num2=0;
    printf("Enter the first number:\n");
    scanf("%d",&num1);
    printf("Enter the second number:\n");
    scanf("%d",&num2);
    swap(num1,num2);
    return 0;
}

int swap(int num1, int num2)
{
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("The first number now = %d, the second number now = %d.\n",num1,num2);
}
