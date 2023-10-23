#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 100;
    printf("enter the size: \n");
    scanf("%d",&size);
    int arr[size];

    for(int i=0; i<size; i++)
    {
        printf("enter element no.%d: ",(i+1));
        scanf("%d",&arr[i]);
    }

    printf("\n");
    printf("The Array is:\n");

    for(int i=0; i<size; i++)
    {
        printf("element no.%d: %d\n",(i+1),arr[i]);
    }

    return 0;
}
