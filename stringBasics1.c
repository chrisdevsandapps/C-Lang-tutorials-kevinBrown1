

#include <stdio.h>

void function111() {
    printf("\nfunction111():\n");
    char test[5];
    test[0] = 't';
    test[1] = 'e';
    test[2] = 's';
    test[3] = 't';
    test[4] = '\0';
    printf("%s\n", test);
}

void function222() {
    printf("\nfunction222():\n");
    char test[5] = "test";
    printf("%s\n", test);
}

void function333() {
    printf("\nfunction333():\n");
    char test[5] = "test";
    printf("%s\n", test);

    for (int i = 0; i < 5; i++) {
        printf("test[%d] == '%c'\n", i, test[i]);
    }
}

void function444() {
    printf("\nfunction444():\n");
    char test[25] = "some big long string";
    printf("%s\n", test);

    for (int i = 0; i < 25; i++) {
        printf("test[%d] == '%c'\n", i, test[i]);
    }
}


int main() {

    function111();
    function222();
    function333();
    function444();

    return 0;
}