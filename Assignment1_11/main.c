#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, sum = 0;
    for(int i=1; i<=100; i++)
    {
        sum += i;
    }

    printf("The sum = %d\n",sum);
    return 0;
}
