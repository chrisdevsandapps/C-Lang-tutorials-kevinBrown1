

#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <math.h>

void function111(int start, int length) {
    printf("\nstart function111() loop\n");
    int i = start;
    printf("i  ==>  %d (<-- starting value)\n", i);

    do {
        i = i + 1;
        printf("i  ==>  %d\n", i);
        usleep(500000);

    } while (i < length);

    printf("finished function111() loop\n");
}

int main() {

    function111(0, 5);
    function111(5, 6);
    function111(5, 5);
    function111(6, 5);
    return 0;
}

/*
NOTE:
doWhile versus while loop,
doWhile loop will execute code atleast one, no matter what
*/