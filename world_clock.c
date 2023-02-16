#include <stdio.h>
#include <time.h>
// 

int main()
{
    time_t now = time(NULL);
    struct tm *local = localtime(&now);

    printf("Current time in New York: %02d:%02d\n", (local->tm_hour + 3) % 24, local->tm_min);
    printf("Current time in London: %02d:%02d\n", (local->tm_hour + 8) % 24, local->tm_min);
    printf("Current time in Tokyo: %02d:%02d\n", (local->tm_hour + 14) % 24, local->tm_min);

    return 0;
}
