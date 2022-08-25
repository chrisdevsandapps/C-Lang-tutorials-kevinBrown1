

#include <stdio.h>

void func1(int input) {
    if(input == 1) {
        printf("printing this if true\n");
    }
    else {
        printf("printing this if false\n");
    }
}

void func2(int input) {
    if (input == 2) {
        printf("input is equal to 2\n");
    }
    else if (input == 3) {
        printf("input is equal to 3\n");
    }
    else {
        printf("input is neither equal to 2 or 3\n");
    }
}

void func3(int input) {
    if (input < 5) printf("less than 5\n");
    else if (input < 6) printf("less than 6\n");
    else if (input < 7) printf("less than 7\n");
    else if (input < 8) printf("less than 8\n");
    else printf("else condition\n");
}


int main() {

    func1(1);
    func1(0);
    func2(2);
    func2(3);
    func2(111);

    func3(3);
    func3(5);
    func3(6);
    func3(7);
    func3(8);
    func3(9);

    return 0;
}



