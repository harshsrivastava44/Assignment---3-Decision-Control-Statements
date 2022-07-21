// 18. Write a program which takes the month number as an input and display number of -*days in that month
#include <stdio.h>
int main()
{

    int x, a = 30, b = 31, c = 28;

    printf("Enterthe month number\n");
    scanf("%d", &x);
    if (x == 1 || x == 3 || x == 5 || x == 7 || x == 8 || x == 1 || x == 10 || x == 12)
    {
        printf("the number of days in month %d is %d", x, b);
    }
    if (x == 4 || x == 6 || x == 9 || x == 11)
    {
        printf("the number of days in month %d is %d", x, a);
    }
    if (x == 2)
    {
        printf("the number of days in month %d is %d", x, c);
    }
    
printf("\n");
    return 0;
   
    
}