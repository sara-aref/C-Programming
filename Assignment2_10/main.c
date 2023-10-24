#include <stdio.h>
#include <stdlib.h>

int countHoles(int num);
int main()
{
    int num = 0;
    printf("enter the number: \n");
    scanf("%d",&num);
    countHoles(num);
    return 0;
}
int countHoles(int num)
{
    int remainder = 0, holes = 0, res = 0;
    while(num != 0)
    {
        remainder = num % 10;
        num /= 10;
        if((1==remainder) || (2==remainder) || (3==remainder) || (5==remainder) || (7==remainder))
        {
            holes = 0;
        }
        else if((0==remainder) || (4==remainder) || (6==remainder) || (9==remainder))
        {
            holes = 1;
        }
        else if((8==remainder))
        {
            holes = 2;
        }
        else
        {
            printf("please enter valid number.\n");
        }
        res += holes;
    }
    printf("Holes = %d",res);
}
