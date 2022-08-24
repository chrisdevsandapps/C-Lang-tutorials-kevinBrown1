

#include <stdio.h>

int main() {

    printf("double quote: \" \n");
    printf("backslash \\ \n");

    int someIntVar = 888;
    printf("percent-d for integers: %d \n", someIntVar);
    printf("%d, %d, %d \n", someIntVar, someIntVar + 1, someIntVar + 2);

    char someChar = 'Q';
    printf("percent-c for char: %c \n", someChar);

    double someDouble = 888.999;
    printf("percent-f for double: %f \n", someDouble);
    printf("percent-f for double: %5.3f \n", someDouble);
    printf("percent-f for double: %5.2f \n", someDouble);
    printf("percent-f for double: %5.1f \n", someDouble);

    char charx[] = "this is a string\n";
    printf("percent-s for string: %s \n", charx);

    printf("|||%d|||\n", someIntVar);

    printf("|||%10d|||\n", someIntVar);

    printf("|||%-10d|||\n", someIntVar);
}

