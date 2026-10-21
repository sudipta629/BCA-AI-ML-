
#include <stdio.h>

int main() {
    int num, rem;
    int octal = 0, place = 1;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Please enter a non-negative number.\n");
        return 1;
    }

    if (num == 0) {
        printf("Octal number: 0\n");
        return 0;
    }

    while (num > 0) {
        rem = num % 8;
        octal = octal + rem * place;
        num = num / 8;
        place = place * 10;
    }

    printf("Octal number: %d\n", octal);

    return 0;
}
