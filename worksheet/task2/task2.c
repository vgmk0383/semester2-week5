/*
 * Sem 2, week 5
 *
 * Portfolio submission: Hexadecimal to Decimal Converter
 * Name: Joshua Daniel
 * ID: 201973385
 */

#include <stdio.h>
#include <string.h>

int main(void) {
    char hex[9];
    long decimal = 0;

    printf("Enter a hexadecimal: ");
    scanf("%8s", hex);

    int length = strlen(hex);

    for (int i = 0; i < length; i++) {
        char c = hex[i];
        int value;

        if (c >= '0' && c <= '9') {
            value = c - '0';
        } 
        else if (c >= 'A' && c <= 'F') {
            value = c - 'A' + 10;
        } 
        else if (c >= 'a' && c <= 'f') {
            value = c - 'a' + 10;
        } 
        else {
            printf("Error: Invalid Hexadecimal\n");
            return 0;
        }

        decimal = decimal * 16 + value;
    }

    printf("%ld\n", decimal);

    return 0;
}
