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

    int max = arr[0];
    int min = arr[0];
    for(int i=0; i<size; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    printf("The max number: %d\n",max);
    printf("The min number: %d\n",min);

    return 0;
}
