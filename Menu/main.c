#include <stdio.h>
#include <stdlib.h>
#include <dos.h>
#include <dir.h>
#include <windows.h>

#define up 72
#define down 80
#define home 71
#define end 79
#define enter 13
#define backspace 8

#ifndef Standard
#define Standard
   typedef unsigned char  u8;
   typedef signed char  s8;
   typedef unsigned short int  u16;
   typedef signed short int  s16;
   typedef unsigned long int  u32;
   typedef signed long int  s32;

#endif

struct student {
    u8 name[10];
    u8 gender;
    u8 age;
    s32 id;
};

void pointing(int position, int point);
int scan_struct_Students(struct student s[], int size);
void print_struct_Students(struct student s[], int size);
void SetColor(int ForgC);

int main()
{
    int numOfStudents = 0, size = 0;
    struct student students[1000];

    system("cls");
    int point = 1, key = 0, back = 0;
    char con = 'y';

    while (1)
    {
        system("cls");

        switch (point)
        {
        case 1:
            SetColor(4);
            pointing(1, point); printf("New\n");
            SetColor(15);
            pointing(2, point); printf("Display\n");
            SetColor(15);
            pointing(3, point); printf("Exit\n");
            break;
        case 2:
            SetColor(15);
            pointing(1, point); printf("New\n");
            SetColor(4);
            pointing(2, point); printf("Display\n");
            SetColor(15);
            pointing(3, point); printf("Exit\n");
            break;
        case 3:
            SetColor(15);
            pointing(1, point); printf("New\n");
            SetColor(15);
            pointing(2, point); printf("Display\n");
            SetColor(4);
            pointing(3, point); printf("Exit\n");
            break;
        }

        key = getch();
        if ((down == key) && (point != 3))
        {
            point++;
        }
        else if ((up == key) && (point != 1))
        {
            point--;
        }
        else if (end == key)
        {
            exit(0);
        }
        else if (home == key)
        {
            point = 1;
        }
        else if (enter == key)
        {
            switch (point)
            {
            case 1:
                system("cls");

                do {
                    printf("Enter new student:\n");
                    numOfStudents = scan_struct_Students(students, numOfStudents);
                    printf("Continue? (y/n): ");
                    scanf(" %c", &con);
                    size = numOfStudents;
                } while (con == 'y' || con == 'Y');

                printf("Enter backspace to exit.");
                back = getch();
                while (backspace != back)
                {
                    back = getch();
                }
                break;
            case 2:
                system("cls");
                print_struct_Students(students, size);

                printf("Enter backspace to exit.");
                back = getch();
                while (backspace != back)
                {
                    back = getch();
                }
                break;
            case 3:
                exit(0);
            }
        }
    }
    return 0;
}

void pointing(int position,int point)
{
    if(position == point)
    {
        printf("     ");
    }
}

int scan_struct_Students(struct student s[], int numOfStudents)
{
    printf("Enter name: ");
    scanf("\n");
    scanf("%[^\n]%*c", s[numOfStudents].name);
    printf("Enter age: ");
    scanf("%d", &s[numOfStudents].age);
    printf("Enter ID: ");
    scanf("%d", &s[numOfStudents].id);
    printf("Enter Gender: ");
    scanf(" %c", &s[numOfStudents].gender);
    return numOfStudents + 1;
}

void print_struct_Students(struct student s[], int size)
{
    printf("----------------- Display -------------------- \n");
    for (int i = 0; i < size; i++)
    {
        printf("name[%d] = %s \n", i + 1, s[i].name);
        printf("gender[%d] = %c \n", i + 1, s[i].gender);
        printf("age [%d]=  %d \n", i + 1, s[i].age);
        printf("id [%d] =  %ld \n", i + 1, s[i].id);
    }
}

void SetColor(int ForgC){
     WORD wColor;

      HANDLE hStdOut = GetStdHandle(STD_OUTPUT_HANDLE);
      CONSOLE_SCREEN_BUFFER_INFO csbi;

                       //We use csbi for the wAttributes word.
     if(GetConsoleScreenBufferInfo(hStdOut, &csbi))
     {
                 //Mask out all but the background attribute, and add in the forgournd     color
          wColor = (csbi.wAttributes & 0xF0) + (ForgC & 0x0F);
          SetConsoleTextAttribute(hStdOut, wColor);
     }
     return;
 }
