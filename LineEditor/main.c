#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

#define LEFT 75
#define RIGHT 77
#define ENTER 13
#define BACKSPACE 8
#define ESC 27
#define SPACE 32


void gotoxy(int x, int y)
{
    printf("\033[%d;%df", y, x);
    fflush(stdout);
}

int main()
{
    char sentence[100];
    char character = 0;
    int i = 0;

    while (1)
    {
        character = getchar();

        if (character == ENTER)
            break;

        sentence[i] = character;

        if (-32 != character)
        {
            printf("%c", character);
        }
        else
        {
            character = getch();
            switch (character)
            {
                case LEFT:
                    if (i > 0)
                    {
                        i--;
                    }
                    break;
                case RIGHT:
                    if (i < strlen(sentence))
                    {
                        i++;
                    }
                    break;
                case BACKSPACE:
                    if (i > 0)
                    {
                        i--;
                        sentence[i] = '\0';
                        gotoxy(i, 0);
                        printf(" ");
                   	  gotoxy(i, 0);
            }

            }
        }
        i++;
    }
    sentence[i] = '\0';
    printf("\nEntered Sentence: %s\n", sentence);

    return 0;
}
