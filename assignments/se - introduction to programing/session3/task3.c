#include <stdio.h>

int main()
{
    char playlistName[] = "My Favorite Hits";
    int totalSongs = 25;
    float averageDuration = 3.8f;

    printf("My favorite Spotify playlist is \"%s\". It contains %d songs, and the average song duration is %.1f minutes.\n",
           playlistName, totalSongs, averageDuration);

    return 0;
}
