#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, p = 1, res = 1;
    printf("Enter the number:\n");
    scanf("%d",&num);
    printf("Enter the power:\n");
    scanf("%d",&p);

    for(int i=1; i<=p; i++)
    {
        res *= num;
    }

    printf("the result: %d",res);
    return 0;
}
