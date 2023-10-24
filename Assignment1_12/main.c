#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num =0, f=1;
    printf("Enter the number:\n");
    scanf("%d",&num);

    if(num > 0)
    {
        for(int i=1; i<=num; i++)
        {
            f = f * i;
        }
        printf("The factorial = %d",f);
    }
    else
    {
        printf("please enter positive number.\n");
    }
    return 0;
}
