//C Program to add two matrix and put the result in a third one, then print the result.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,j=0,row=0,col=0;
    printf("Enter the size of the rows: ");
    scanf("%d",&row);
    printf("Enter the size of the cols: ");
    scanf("%d",&col);
    int arr1[row][col];
    int arr2[row][col];
    int arr3[row][col];

    printf("The first matrix:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&arr1[i][j]);
        }
    }

    printf("The second matrix:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            arr3[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    printf("The Third matrix:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d\n",arr3[i][j]);
        }
    }

    return 0;
}
