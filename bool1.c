

// using enum as boolean true and false

#include <stdio.h>

typedef enum {
    T, F
} chrisBool;

int main() {
    chrisBool bool1, bool2;

    bool1 = F;
    if (bool1 == F) {
        printf("bool1 is false\n");
    }
    else {
        printf("bool1 is true\n");
    }

    bool2 = T;
    if (bool2 == T) {
        printf("bool2 is true\n");
    }
    else {
        printf("bool2 is false\n");
    }
}