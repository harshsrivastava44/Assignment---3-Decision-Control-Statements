// 15. Write a program to check whether a given number is positive, negative or zero.
#include <stdio.h>
int main()
{

    int x;

    printf("Enter the number \n");
    scanf("%d", &x);
    if (x > 0)

        printf("%d is a positive number", x);
    if (x < 0)

        printf("%d is a negative number", x);

    if (x == 0)

        printf(" %d is zero", x);

    return 0;
}
