#include <stdio.h>

int main() {
    int followerCount = 100;

    printf("Initial followerCount: %d\n", followerCount);

    printf("\nUsing post-increment :\n");
    printf("follower count before: %d\n", followerCount++);
    printf("follower count after increment: %d\n", followerCount);

    followerCount = 100;

    printf("\nUsing pre-increment :\n");
    printf("follower count before: %d\n", ++followerCount);
    printf("follower count after increment: %d\n", followerCount);

    return 0;
}
