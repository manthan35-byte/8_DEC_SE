
//In C, variable names must:

//Start with a letter or an underscore (_).
//Contain only letters, digits, and underscores.
//Not contain spaces or special characters like $ or -.
//Not start with a digit.

//1stPlayer, player_age, $score, total-marks, userName

//(1tsplayer,$score,total-marks) are invalid variables.
#include <stdio.h>

int main()
{
    char firstplayer[] = "dhruv";
    int player_age = 21;
    int score = 66;
    int total_marks = 480;
    char userName[] = "@dhruv";

    printf("First player is: %s\n", firstplayer);
    printf("Player age is: %d\n", player_age);
    printf("Score is: %d\n", score);
    printf("Total marks is: %d\n", total_marks);
    printf("Username is: %s\n", userName);

    return 0;
}
