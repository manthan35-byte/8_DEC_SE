#include <stdio.h>

int main() {
    float amount, finalAmount;

    printf("Enter total cart amount: ");
    scanf("%f", &amount);

    if (amount > 1000) 
    {
        if (amount > 2000) 
        {
            finalAmount = amount - (amount * 20 / 100);
            printf("20%% Discount Applied!\n");
        } else 
        {
            finalAmount = amount - (amount * 10 / 100);
            printf("10%% Discount Applied!\n");
        }
    } 
    else 
    {
        finalAmount = amount;
        printf("No Discount Applied!\n");
    }

    printf("Final Amount to Pay: %.2f", finalAmount);

    return 0;
}

