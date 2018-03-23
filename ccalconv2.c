#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    time_t timer;
    struct tm *local;

    timer = time(NULL);
    local = localtime(&timer);

    int seireki = local->tm_year + 1900;
    int heisei = seireki - 1988;
    printf("西暦%d年は平成%d年です。\n", seireki, heisei);
    return 0;
}
