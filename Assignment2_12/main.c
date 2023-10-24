#include <stdio.h>
#include <stdlib.h>
float HAT(float temp);
int main()
{
    float temp = 0;
    printf("Enter the temperature: \n");
    scanf("%f",&temp);
    HAT(temp);

    return 0;
}
float HAT(float temp)
{
    int heating_time = 0;
    if((temp >= 0) && (temp <= 30))
    {
        heating_time = 7;
        printf("Heating Time = %d",heating_time);
    }
    else if((temp > 30) && (temp <= 60))
    {
        heating_time = 5;
        printf("Heating Time = %d",heating_time);
    }
    else if((temp > 60) && (temp <= 90))
    {
        heating_time = 3;
        printf("Heating Time = %d",heating_time);
    }
    else if((temp > 90) && (temp <= 100))
    {
        heating_time = 1;
        printf("Heating Time = %d",heating_time);
    }
    else
    {
        printf("Temperature is invalid.\n");
    }
}
