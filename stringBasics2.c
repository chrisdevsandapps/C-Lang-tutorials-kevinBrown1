

#include <stdio.h>
#include <string.h>

void function111() {
    printf("\nfunction111():\n");
    char mystring[] = "some string";
    int length = strlen(mystring);
    printf("content = %s\n", mystring);
    printf("length = %d\n", length);
    // note: di kasama yung null terminator sa string length
}

void function222() {
    printf("\nfunction222():\n");
    char mystring[] = "some string";
    int length = strlen(mystring);

    int count = 0;
    for (int i = 0; i < length; i++) {
        if (mystring[i] == 's' || mystring[i] == 'S') {
            count  = count + 1;
        }
    }
    printf("Number of s is: %d\n", count);
}

void function333() {
    // string copy
    printf("\nfunction333():\n");

    char str1[] = "hello world";
    printf("str1 == %s\n", str1);
    printf("str1 lenght == %ld\n\n", strlen(str1));

    char str2[50] = "";
    printf("str2 == %s\n", str2);
    printf("str2 lenght == %ld\n\n", strlen(str2));

    strcpy(str2, str1);
    printf("str2 == %s\n", str2);
    printf("str2 lenght == %ld\n\n", strlen(str2));

}



int main() {

    function111();
    function222();
    function333();

    return 0;
}