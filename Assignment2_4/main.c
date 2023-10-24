#include <stdio.h>
#include <stdlib.h>

int operation(int num1, int num2, char op);

int main()
{
    int num1=0, num2=0;
    char op ='0';
    printf("Enter number 1:\n");
    scanf("%d",&num1);
    printf("Enter number 2:\n");
    scanf("%d",&num2);
    printf("Enter the operator:\n");
    scanf(" %c",&op);
    operation(num1,num2,op);
    return 0;
}

int operation(int num1, int num2, char op)
{
    switch(op)
    {
        case '+':
            printf("The sum: %d + %d = %d\n",num1,num2,(num1 + num2));
        break;
        case '-':
            printf("The sub: %d - %d = %d\n",num1,num2,(num1 - num2));
        break;
        case '*':
            printf("The mul: %d * %d = %d\n",num1,num2,(num1 * num2));
        break;
        case '/':
            if(num2 != 0)
            {
                printf("The div: %d / %d = %f\n",num1,num2,((float)num1 / num2));
            }
            else
            {
                printf("Math Error");
            }
        break;
        default:
            printf("Wrong operator");
        break;
    }

}
