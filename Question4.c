/*4. Write a program to check whether a given number is an even number or an odd
number without using % operator.*/
#include <stdio.h>
int main()
{
    int x, res;
    printf("Enter a number \n");
    scanf("%d", &x);
    res = x & 1;

    if (res == 0)
    {
        printf("EVEN");
    }

    if (res == 1)
    {

        printf("ODD");
    }
    return 0;
}