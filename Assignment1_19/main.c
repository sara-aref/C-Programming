#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size=0;
    printf("Enter the size:\n");
    scanf("%d",&size);
    for(int i=size; i>=0; i--)
    {
        for(int j=i; j>=0; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
