#include <stdio.h>
#include <stdlib.h>

int cube(int n);

int main()
{
    int num = 0;
    printf("enter the number:\n");
    scanf("%d",&num);

    cube(num);

    return 0;
}

int cube (int n)
{
    int res = n * n * n;
    printf("The result = %d",res);
}
