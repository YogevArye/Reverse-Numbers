#include <stdio.h>

unsigned ReverseNumber(unsigned number) {
    unsigned ones_digit, tens_digit, hundreds_digit, result;

    /*Extract the digits in the correct order*/
    hundreds_digit = number / 100;        
    tens_digit = (number / 10) % 10;      
    ones_digit = number % 10;             

    /* Combine the digits in reverse order*/
    result = ones_digit * 100 + tens_digit * 10 + hundreds_digit;

    return result;
}

int main() {
   
    unsigned number_to_reverse = 123;
    printf("Reversed number: %d\n", ReverseNumber(number_to_reverse));/*Expected value: 321*/
    



    return 0;
}

