/*11. Write a program to take marks of 5 subjects from the user. Assume marks are given
out of 100 and passing marks is 33. Now display whether the candidate passed the
examination or failed.*/
#include <stdio.h>
int main()
{
    int Hindi, English, Math, Chemistry, Physics;
    printf("enter the marks of 5 subjects \n");
    scanf("%d%d%d%d%d", &Hindi, &English, &Math, &Chemistry, &Physics);
    if (Hindi >= 33 && Hindi <=100 &&  English>= 33 && English <= 100 && Math >= 33 && Math <= 100 && Chemistry >= 33 && Chemistry <= 100 && Physics >=33 && Physics <= 100)
        {
    
    printf("passed");
        }
             else 
                        printf("Failed");
    
    return 0;
}