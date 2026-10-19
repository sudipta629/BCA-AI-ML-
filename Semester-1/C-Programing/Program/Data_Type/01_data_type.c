#include <stdio.h>

int main() {

    // Integer
    int age = 19;

    // Character
    char grade = 'A';

    // Float
    float height = 5.8f;

    // Double
    double pi = 3.1415926535;

    // Unsigned integer
    unsigned int marks = 95;

    // Long integer
    long int population = 1000000;

    // Long long integer
    long long int bigNumber = 12345678900LL;

    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("Height: %.2f\n", height);
    printf("Pi: %.10lf\n", pi);
    printf("Marks: %u\n", marks);
    printf("Population: %ld\n", population);
    printf("Big Number: %lld\n", bigNumber);

    return 0;
}