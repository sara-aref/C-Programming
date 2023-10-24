#include <stdio.h>
#include <stdlib.h>
void printFibonacci(int n);
int main()
{
    int n = 0;
    printf("Enter the number of elements:\n");
    scanf("%d",&n);
    printf("The series: ");
    printf("%d %d ",0,1);
    printFibonacci(n-2);

    return 0;
}

void printFibonacci(int n){
    int n1=0, n2=1, n3=0;
    if(n > 0){
         n3 = n1 + n2;
         n1 = n2;
         n2 = n3;
         printf("%d ",n3);
         printFibonacci(n-1);
    }
}
