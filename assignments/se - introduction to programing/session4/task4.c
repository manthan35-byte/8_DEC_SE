#include<stdio.h>

int main()
{
    int share;
    float comment,like;

    printf("enter like of new post :");
    scanf("%f",&like);

    printf("enter comment of new post:");
    scanf("%f",&comment);

    printf("enter number of sharing post:");
    scanf("%d",&share);

    if (like >= 1000 || comment > 200 && share >= 50) {
        printf("Trending: True");
    } else {
        printf("Trending: False");
    }
    return 0;
}

