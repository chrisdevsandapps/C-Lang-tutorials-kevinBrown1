

#include <stdio.h>

void function111() {
    printf("\nfunction111():\n");
    int grade[5];
    grade[0] = 91;
    grade[1] = 82;
    grade[2] = 73;
    grade[3] = 64;
    grade[4] = 55;

    printf("grade[0] %d\n", grade[0]);
    printf("grade[4] %d\n", grade[4]);
}

void function222() {
    printf("\nfunction222():\n");
    int grade[5];
    grade[0] = 91;
    grade[1] = 82;
    grade[2] = 73;
    grade[3] = 64;
    grade[4] = 55;

    int i = 0;
    printf("grade[%d] %d\n", i, grade[i]);
    i++;
    printf("grade[%d] %d\n", i, grade[i]);
    i++;
    printf("grade[%d] %d\n", i, grade[i]);
    i++;
    printf("grade[%d] %d\n", i, grade[i]);
    i++;
    printf("grade[%d] %d\n", i, grade[i]);
}

void function333() {
    printf("\nfunction333():\n");
    int grade[5];
    grade[0] = 91;
    grade[1] = 82;
    grade[2] = 73;
    grade[3] = 64;
    grade[4] = 55;

    for(int i = 0; i < 5; i++) {
        printf("grade[%d] == %d\n", i, grade[i]);
    }
}

void function444() {
    printf("\nfunction444():\n");
    int grade[] = {91, 82, 73, 64, 55};

    for(int i = 0; i < 5; i++) {
        printf("grade[%d] == %d\n", i, grade[i]);
    }
}

void function555() {
    printf("\nfunction444():\n");
    int grade[] = {91, 82, 73, 64, 55};
    int total = 0;
    for(int i = 0; i < 5; i++) {
        total = total + grade[i];
    }
    int average = total / 5;
    printf("average == %d\n", average);
}

int main() {
    function111();

    function222();

    function333();

    function444();

    function555();

    return 0;
}