// 8. Write a program to check whether a given year is a leap year or not.
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a leap year\n");
    scanf("%d", &x);
    if (x % 4 == 0)
    {
        printf("%d is a leap year ", x);
    }
    else
        printf("%d is not a leap year", x);
        if (x%400==0)
        {
            printf("%d is a leap year",x);
        }
        else
        printf("%d is not a leap year",x);
        
    return 0;
}