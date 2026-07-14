#include <stdio.h>

int main()
{
    const float GST_RATE = 0.18f;

    float basePrice = 500.00f;

    float gstAmount = basePrice * GST_RATE;
    float finalPrice = basePrice + gstAmount;

    printf("Base Price: %.2f\n", basePrice);
    printf("GST Rate: %.0f%%\n", GST_RATE * 100);
    printf("GST Amount: %.2f\n", gstAmount);
    printf("Final Price: %.2f\n", finalPrice);

    return 0;
}
