#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[3] = {0};
    printf("Enter 3 numbers: \n");
    for(int i=0; i<3; i++)
    {
        scanf("%d",&arr[i]);
    }

    int min = arr[0];
    for(int i=1; i<3;i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("the smaller number: %d\n",min);


    return 0;
}
