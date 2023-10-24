#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=0, num2=0;
    printf("Enter the two numbers: \n");
    scanf("%d %d",&num1,&num2);

    if(num1 == num2)
    {
        printf("The two numbers are equal.\n");
    }
    else if(num1 > num2)
    {
        printf("num1 is greater than num2.\n");
    }
    else
    {
        printf("num2 is greater than num1.\n");
    }
    return 0;
}
