#include <stdio.h>

int main()
{
    char productName[] = "Samsung Galaxy M35";
    float price = 18999.99f;
    double rating = 4.5;

    printf("Product Name: %s\n", productName);
    printf("Data Type: string \n\n");

    printf("Price: %.2f\n", price);
    printf("Data Type: float\n\n");

    printf("Rating: %.1lf\n", rating);
    printf("Data Type: double\n");

    return 0;
}

