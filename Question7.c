/*7. Write a program to check whether roots of a given quadratic equation are real &
distinct, real & equal or imaginary roots*/
#include<stdio.h>
int main()
{
    int a;
     printf("Enter the value of root \n");
    scanf("%d", &a);
    if (a>0)
    {
       printf("the roots real & distinct");
    }
    if (a==0)
    {
         printf("the roots real & equal");
    }
    if (a<0)
    {
        printf("the roots are imaginary");
    }
    
    return 0;
}
