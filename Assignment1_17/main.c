#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0, c = 0;
    printf("Enter the number:\n");
    scanf("%d",&num);

    while(num != 0)
    {
        num = num / 10;
        c++;
    }

    printf("The count = %d",c);

    return 0;
}
