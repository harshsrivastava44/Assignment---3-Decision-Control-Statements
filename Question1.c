// 1. Write a program to check whether a given number is positive or non-positive.
#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number");
    scanf("%d", &x);
    if (x>0)
    {
      printf("Positive");

    }
    if (x<=0)
    {
       printf("Non Positive");

    }
    return 0;
    
}