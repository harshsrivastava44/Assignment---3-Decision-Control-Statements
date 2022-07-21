// 5. Write a program to check whether a given number is a three-digit number or not.
#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d", &x);
    if (x > 99)
    {
        if (x < 1000)
        {

            printf("it is a three digit number");
        }
        else
            printf("error it is not a three digit number");
    }
    else
        printf("NOT");
    return 0;
}
