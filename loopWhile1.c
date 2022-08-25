

#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <math.h>

void function111(int start, int length) {
    printf("\nstart function111() loop\n");
    int i = start;
    while (i < length) {
        printf("i  ==>  %d\n", i);
        i = i + 1;
        usleep(500000);
    }
    printf("finished function111() loop\n");
}

void function222() {
    // indefinite loop
    printf("\nstart function222() loop\n");
    int i = 0;
    while (i != 5) {
        printf("enter 5 to quit: ");
        scanf("%d", &i);
        printf("i  ==>  %d\n", i);
        // i = i + 1;
        usleep(500000);
    }
    printf("finished function222() loop\n");    
}


int main() {
    function111(0, 6);
    function111(5, 6);
    function111(6, 6);
    function222();

    return 0;
}