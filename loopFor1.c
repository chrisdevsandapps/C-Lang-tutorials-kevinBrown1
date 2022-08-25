

#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <math.h>

void function111(int start, int length) {
    printf("\nstart function111() loop\n");
    printf("start: %d\n", start);
    printf("length: %d\n", length);

    for (int i = start; i < length; i++) {
        printf("i  ==>  %d\n", i);
        usleep(500000);
    }

    printf("finished function111() loop\n");
}

void function222(int start, int length) {
    // with additional incrementor
    printf("\nstart function222() loop\n");
    printf("start: %d\n", start);
    printf("length: %d\n", length);

    for (int i = start; i < length; i++) {
        printf("i  ==>  %d\n", i);
        usleep(500000);
        i = i + 1;
    }

    printf("finished function222() loop\n");
}

void function333(int start, int length) {
    // with break
    printf("\nstart function333() loop\n");
    printf("start: %d\n", start);
    printf("length: %d\n", length);

    for (int i = start; i < length; i++) {
        printf("i  ==>  %d\n", i);
        usleep(500000);
        if (i == 5) {
            break;
        }
    }

    printf("finished function333() loop\n");
}

void function444(int start, int length) {
    // with continue
    printf("\nstart function444() loop\n");
    printf("start: %d\n", start);
    printf("length: %d\n", length);

    for (int i = start; i < length; i++) {
        if (i == 5) {
            continue;
        }
        printf("i  ==>  %d\n", i);
        usleep(500000);
    }

    printf("finished function444() loop\n");
}

int main() {

    function111(0, 5);
    function111(5, 5);

    function222(0, 20);

    function333(0, 10);
    function444(0, 10);

    return 0;
}