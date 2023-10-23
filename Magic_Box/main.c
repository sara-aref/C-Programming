#include <stdio.h>
#include <stdlib.h>
#include<windows.h>
#include <time.h>

int main()
{
    int row = 0, col = 0, size = 0, value =0;
    printf("Enter the size: ");
    scanf("%d",&size);
    printf("\n");

    if(size%2 != 0)
    {
        row = 1;
    col = (size+1)/2;
    value = 1;

    do
    {
        gotoxy(col*5,row);
        printf("%d",value);
        delay(1);

        if(0 == (value%size))
        {
            row++;
        }
        else
        {
            col--;
            row--;
        }
        if(0 == row)
            {
                row = size;
            }
            if(0 == col)
            {
                col = size;
            }
            value++;

    }while(value <= size*size);
    }
    else
    {
        printf("Please enter odd number.\n");
    }
    return 0;
}

void gotoxy(int x,int y)
{
    COORD coord= {0,0};
    coord.X=x;
    coord.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

void delay(int number_of_seconds)
{
    int milli_seconds = 1000 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}
