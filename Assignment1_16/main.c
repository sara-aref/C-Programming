#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, remainder = 0, reversednum = 0;
    printf("Enter the number:\n");
    scanf("%d",&num);

    while(num != 0)
    {
        remainder = num % 10;
        reversednum = reversednum * 10 + remainder ;
        num /= 10;
    }

    printf("The number = %d\n",reversednum);
    return 0;
}
