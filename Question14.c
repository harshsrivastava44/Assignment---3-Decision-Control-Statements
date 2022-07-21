// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.
#include <stdio.h>
int main()
{
    int x;
    printf("Enter the number \n");
    scanf("%d", &x);
    if (x % 7 == 0)

        printf(" %d Divisible by 7 \n", x);
    

    if (x % 3 == 0)

        printf("%d Divisible by 3", x);
    else
        printf("NOt divisible by both");

    return 0;
}