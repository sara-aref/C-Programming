#include <stdio.h>
#include <stdlib.h>

int main()
{
    float c = 0;
    printf("Enter the temperature in Celsius:\n");
    scanf("%f",&c);
    float f = (c * 9/5) + 32;
    printf("temperature in Fahrenheit: %0.1f\n",f);
    return 0;
}
