#include <stdio.h>

int main()
{
    int itemPrice, quantity, total;

    printf("Enter item price: ");
    scanf("%d", &itemPrice);

    printf("Enter quantity: ");
    scanf("%d", &quantity);

    total = itemPrice * quantity;

    printf("Total Bill Amount = %d", total);

    return 0;
}

