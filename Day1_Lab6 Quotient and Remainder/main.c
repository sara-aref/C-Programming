#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 15;
    int num2 = 8;

    float Quotient = (float)num1 / num2;
    float remainder = num1 % num2;

    printf("Quotient = %f\n",Quotient);
    printf("remainder = %f\n",remainder);

    return 0;
}
