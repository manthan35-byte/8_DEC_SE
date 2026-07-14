#include <stdio.h>

int main() {
    float productPrice, finalPrice;
    int discountPercentage;
    int isMember;

    printf("Enter product price: ");
    scanf("%f", &productPrice);

    printf("Enter discount percentage: ");
    scanf("%d", &discountPercentage);

    printf("Are you a member? (1 = Yes, 0 = No): ");
    scanf("%d", &isMember);

    finalPrice = productPrice - (productPrice * discountPercentage / 100.0);

    if (isMember) {
        finalPrice = finalPrice - (finalPrice * 5 / 100.0);
    }

    printf("\nFinal Price = %.2f\n", finalPrice);

    return 0;
}
