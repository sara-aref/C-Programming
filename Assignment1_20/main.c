#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size=0;
    printf("Enter the size:\n");
    scanf("%d",&size);

    for(int i=1; i<=size; i++)
    {
        for(int k=i; k<=size; k++)
        {
            printf(" ");
        }
        for(int j=1; j<=(2*i-1); j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
