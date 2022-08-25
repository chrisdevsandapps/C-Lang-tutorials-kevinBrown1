

#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <math.h>

void function111(int start, int length) {
    // using break
    printf("\nstart function111() loop\n");
    printf("start  ==>  %d\n", start);
    printf("length  ==>  %d\n", length);
    int i = start;

    while (i < length) {
        i = i + 1;
        printf("i  ==>  %d\n", i);
        if (i == 3) break;
        usleep(500000);
    }

    printf("finished function111() loop\n\n");
}

void function222(int start, int length) {
    // using continue
    printf("\nstart function222() loop\n");
    printf("start  ==>  %d\n", start);
    printf("length  ==>  %d\n", length);
    int i = start;

    while (i < length) {
        i = i + 1;
        if (i == 3) continue;
        printf("i  ==>  %d\n", i);
        usleep(500000);
    }

    printf("finished function222() loop\n\n");
}

int main() {

    // function111(0, 5);
    // function111(5, 6);
    // function111(5, 5);
    // function111(6, 5);

    function222(0, 5);
    function222(5, 6);
    function222(5, 5);
    function222(6, 5);

    return 0;
}