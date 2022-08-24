

#include <stdio.h>


void function1() {
    int year = 2018;
    int price = 19000;
    if (year >= 2019 && price <= 20000) {
        printf("OK!\n");
    }
    else {
        printf("Not OK!\n");
    }
}
void function2() {
    int year = 2020;
    int price = 19000;
    if (year >= 2019 && price <= 20000) {
        printf("OK!\n");
    }
    else {
        printf("Not OK!\n");
    }
}
void function3() {
    int year = 2018;
    if (!(year <= 2019)) printf("OK\n");
    else printf("Not OK\n");
}


int main() {
    function1();
    function2();

    function3();
    return 0;
}