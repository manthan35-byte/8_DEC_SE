#include <stdio.h>

int main()
{
    int age, orderValue;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter total order value: ");
    scanf("%d", &orderValue);

    if (age >= 18 && orderValue >= 500)
        printf("Eligible for Offer");
    else
        printf("Not Eligible for Offer");

    return 0;
}
