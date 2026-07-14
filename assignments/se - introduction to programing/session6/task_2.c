#include <stdio.h>
#include <string.h>

int main() {
    int choice = 0;
    char newTeam[30];

    while (choice != 3) {
        printf("\n===== IPL Fan Menu =====\n");
        printf("1. View Favorite 3 IPL Teams\n");
        printf("2. Add a New Team\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\nFavorite IPL Teams:\n");
                printf("1. RCB\n");
                printf("2. MI\n");
                printf("3. KKR\n");
                break;

            case 2:
                printf("Enter new team name: ");
                scanf("%s", newTeam);
                printf("%s has been added successfully!\n", newTeam);
                break;

            case 3:
                printf("Thank you for using the IPL Fan App!\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}
