#include <stdio.h>
#include <ctype.h>

int main() {
    char inputString[] = "Hello, 123 World!";

    int alphabetCount = 0;
    int digitCount = 0;
    int specialCharCount = 0;

    for (int i = 0; inputString[i] != '\0'; i++) {
        char ch = inputString[i];

        if (isalpha(ch)) {
            alphabetCount++;
        } else if (isdigit(ch)) {
            digitCount++;
        } else {
            specialCharCount++;
        }
    }

    printf("Alphabets: %d\n", alphabetCount);
    printf("Digits: %d\n", digitCount);
    printf("Special Characters: %d\n", specialCharCount);

    return 0;
}