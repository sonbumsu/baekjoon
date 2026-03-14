#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void printFizzBuzz(int N) {
    if (N % 3 == 0 && N % 5 == 0) {
        printf("FizzBuzz\n");
    } else if (N % 3 == 0) {
        printf("Fizz\n");
    } else if (N % 5 == 0) {
        printf("Buzz\n");
    } else {
        printf("%d\n", N);
    }
}

int main() {
    char str1[20], str2[20], str3[20];
    scanf("%s", str1);
    scanf("%s", str2);
    scanf("%s", str3);

    if (strcmp(str3, "FizzBuzz") != 0 && strcmp(str3, "Fizz") != 0 && strcmp(str3, "Buzz") != 0) {
        printFizzBuzz(atoi(str3) + 1);
    } else if (strcmp(str2, "FizzBuzz") != 0 && strcmp(str2, "Fizz") != 0 && strcmp(str2, "Buzz") != 0) {
        printFizzBuzz(atoi(str2) + 2);
    } else {
        printFizzBuzz(atoi(str1) + 3);
    }
    return 0;
}
