

#include <stdio.h>

int add(int aaa, int bbb) {
    return aaa + bbb;
}
int multiply(int aaa, int bbb) {
    int result = 0;
    for (int i = 0; i < aaa; i++) {
        result = result + bbb;
    }
    return result;
}
void printInt(int xxx, char strInput[]) {
    printf("printInt(): %s: %d\n", strInput, xxx);
}


int main() {
    int xxx = add(888, 999);
    printf("sum: %d\n", xxx);

    int yyy = multiply(888, 999);
    printf("product: %d\n", yyy);

    printInt(xxx, "sum");
    printInt(yyy, "product");

    return 0;
}
