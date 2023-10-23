//Calculate average of each column in a 2D Array.

#include <stdio.h>
#include <stdlib.h>
#define row 3
#define col 3
int main()
{
    int sum = 0;
    int avg = 0;
    int arr[row][col] = {{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row; j++)
        {
            sum += arr[j][i];
        }
        printf("The avg of col %d = %f\n",(i+1),((float)sum/row));
        sum = 0;
    }
    return 0;
}
