

#include <stdio.h>
#include <ctype.h>
#include <string.h>

void function1(int input) {
    switch (input) {
        case 1:
            printf("this is case 1\n");
            break;
        case 2:
            printf("this is case 2\n");
            break;
        default:
            printf("this is default case\n");
    }
    printf("end of switch statement\n\n");
}

function2() {
    // #include <ctype.h>
    // #include <string.h>
    char s[] = "aabAdefghIjKLMNoPqRsTU";
    int length = strlen(s);
    int a = 0;
    int vowel = 0;
    for (int i = 0; i < length; i++) {
        switch(toupper(s[i])) {
            case 'A':   a++;
            case 'E':
            case 'I':
            case 'O':
            case 'U':   vowel++;
        }
    }
    printf("a: %d, vowels: %d\n", a, vowel);

}

// #######################
int main() {
    function1(1);
    function1(2);
    function1(5);

    function2();
    return 0;
}
// #######################

