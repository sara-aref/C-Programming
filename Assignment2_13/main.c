#include <stdio.h>
#include <stdlib.h>
float add(float num1, float num2);
int main()
{
    float num1=0,num2=0;
    printf("Enter the first number:\n");
    scanf("%f",&num1);
    printf("Enter the second number:\n");
    scanf("%f",&num2);
    add(num1,num2);
    return 0;
}

float add(float num1, float num2)
{
    float sum = floor(num1+num2);
    printf("The sum = %f",sum);
}
