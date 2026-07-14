#include <stdio.h>
#include <string.h>

int main() {
    char meal[20];
    int choice = 0;

    printf("Enter meal time (breakfast/lunch/dinner/snack): ");
    scanf("%s", meal);

    if (strcmp(meal, "breakfast") == 0)
        choice = 1;
    else if (strcmp(meal, "lunch") == 0)
        choice = 2;
    else if (strcmp(meal, "dinner") == 0)
        choice = 3;
    else if (strcmp(meal, "snack") == 0)
        choice = 4;

    switch (choice) {
        case 1:
            printf("Suggestion: Poha");
            break;

        case 2:
            printf("Suggestion: Paneer Biryani");
            break;

        case 3:
            printf("Suggestion: Butter Naan with Paneer");
            break;

        case 4:
            printf("Suggestion: Samosa");
            break;

        default:
            printf("Try some fruits!");
    }

    return 0;
}