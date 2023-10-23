#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1 = 5;
    int num2 = 2;

    int sum = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;
    float div = (float)num1 / num2;

    printf("The sum = %d + %d = %d\n",num1,num2,sum);
    printf("The sub = %d - %d = %d\n",num1,num2,sub);
    printf("The mul = %d * %d = %d\n",num1,num2,mul);
    printf("The div = %d / %d = %f\n",num1,num2,div);

    return 0;
}
