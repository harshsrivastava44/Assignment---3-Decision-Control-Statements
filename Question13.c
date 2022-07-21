//13. Write a program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main ()
{
    int x;
    printf("Enter the number \n");
    scanf("%d",&x);
    if (x%3==0 && x%2==0)
    {
        printf(" The number %d is divisible by 3 and divisible by 2",x);

    }
    else
    printf("Not divisible");
    return 0;
    
}