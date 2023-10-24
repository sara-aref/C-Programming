#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size=0;
    printf("Enter the size:\n");
    scanf("%d",&size);
    for(int i=0; i<size; i++)
    {
        for(int j=0; j<size; j++)
        {
            if((i==j) || (j==(size-i-1)))
            {
                printf(" *");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
