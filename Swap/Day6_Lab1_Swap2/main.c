#include <stdio.h>
#include <stdlib.h>

int swap(int * x, int * y);

int main()
{
    int x = 0, y = 0;
    printf("Enter first number: ");
    scanf("%d",&x);
    printf("Enter second number: ");
    scanf("%d",&y);

    swap(&x, &y);
    printf("After swapping Number 1 & Number 2: %d & %d",x,y);

    return 0;
}

int swap(int * x, int * y)
{
    *x = *x - *y;
    *y = *x + *y;
    *x = *y - *x;
}
