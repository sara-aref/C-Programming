#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1=0, num2=0;
    printf("Enter the two numbers: \n");
    scanf("%d %d",&num1,&num2);

    int Result = ((num1 + num2)*3)-10;
    printf("The Result = %d",Result);
    return 0;
}
