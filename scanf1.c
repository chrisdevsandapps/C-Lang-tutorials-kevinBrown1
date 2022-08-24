

#include <stdio.h>

void func1() {
    int num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("the number is: %d\n", num);
}

void func2() {
    char xxx = 'a';
    printf("Enter a char: ");
    scanf("%c", &xxx);
    printf("the char is: %c\n", xxx);   
}
void func3() {
    float xxx = 0;
    printf("Enter a float: ");
    scanf("%f", &xxx);
    printf("the float is: %f\n", xxx);   
}
void func4() {
    double xxx = 0;
    printf("Enter a double: ");
    scanf("%lf", &xxx);
    printf("the double is: %f\n", xxx);   
}
void func5() {
    int n1, n2, n3;
    n1 = n2 = n3 = 0;
    printf("Enter n1, n2, n3: \n");
    scanf("%d %d %d", &n1, &n2, &n3);
    printf("sum is: %d\n", n1 + n2 + n3);
}
void func6() {
   char str[50] = "this is a string\n";
   printf("Enter a string: \t\t");
   scanf("%s", str);  
   // <-- notice there is no "&"
   // <-- also, hindi pwede ang space sa string input
   printf("The string is: %s \n", str);

}

int main() {

    // func1();
    // func2();
    // func3();
    // func4();
    func5();
    func6();

    return 0;
}

