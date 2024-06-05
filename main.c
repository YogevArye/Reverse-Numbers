#include <stdio.h>

unsigned ReverseNumber(unsigned number) {
    unsigned ones_digit, tens_digit, hundreds_digit, result;

    // Extract the digits in the correct order
    hundreds_digit = number / 100;        // מאות
    tens_digit = (number / 10) % 10;      // עשרות
    oneTestis_digit = number % 10;             // יחידות

    // Combine the digits in reverse order
    result = ones_digit * 100 + tens_digit * 10 + hundreds_digit;

    return result;
}

int main() {
    int d = 12;
    int m = 6;
    int y = 1983;
    int x = (((y << 4) + m) << 5) + d;

    printf("Reversed number: %d\n", x);
    d = x % 32;
    m = (x >> 5) % 16;
    y = x >> 9;
    printf("Reversed number: %d\n", d);
    printf("Reversed number: %d\n", m);
    printf("Reversed number: %d\n", y);



    return 0;
}
