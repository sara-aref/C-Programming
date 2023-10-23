#include <stdio.h>
#include <stdlib.h>

int main()
{
    int degree = 0;
    printf("Enter the degree:\n");
    scanf("%d",&degree);

    if((degree <= 100) && (degree >= 85))
    {
        printf("Excellent\n");
    }
    else if((degree < 85) && (degree >= 75))
    {
        printf("Very Good\n");
    }
    else if((degree < 75) && (degree >= 65))
    {
        printf("Good\n");
    }
    else if((degree < 65) && (degree >= 50))
    {
        printf("Pass\n");
    }
    else if((degree < 50) && (degree >= 0))
    {
        printf("Fail\n");
    }
    else
    {
        printf("Error\n");
    }

    return 0;
}
