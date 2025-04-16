#include <stdio.h>

int isNumberPalindrome(int num) {
    if (num < 0) return 0;
    int original = num;
    int reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if (isNumberPalindrome(number)) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is NOT a palindrome.\n", number);
    }
    return 0;
}