/*10. Write a program which takes the cost price and selling price of a product from the
user. Now calculate and print profit or loss percentage.*/
#include <stdio.h>
int main()
{
    float SP, CP, profit, loss;
    printf("Enter the value of cost price  and selling price\n");
    scanf("%f%f", &CP, &SP);
    profit = SP - CP;
    loss = CP - SP;
    if (SP > CP)
    {
        printf(" profit %% =%0.2f%% \n", (profit * 100) / CP);
    }
    if (CP > SP)
    {
        printf("loss %% =%0.2f%%", (loss / CP) * 100);
    }
    return 0;
}