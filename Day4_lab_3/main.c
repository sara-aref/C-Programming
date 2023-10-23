#include <stdio.h>
#include <stdlib.h>

int main()
{
    char s[100]={0};
    printf("Please enter the sentence: ");
    scanf("\n");
    scanf("%[^\n]%*c",s);
    printf("%s\n",s);
    return 0;
}
