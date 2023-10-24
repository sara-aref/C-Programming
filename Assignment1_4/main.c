#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r = 0;
    printf("enter the radius: \n");
    scanf("%f",&r);

    float area = (3.14 * r * r);
    float circumference = (2 * 3.14 * r);
    printf("The area of circle = %f\n",area);
    printf("The circumference of circle = %f\n",circumference);
    return 0;
}
