// 6. Write a program to print greater between two numbers. Print one number of both are the same.
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a and b \n");
    
    scanf("%d %d", &a, &b);
    
    if (a > b)
     printf("%d",a);
     if (b>a)
     printf("%d",b);
     else
     printf("%d",a);

    return 0;
}