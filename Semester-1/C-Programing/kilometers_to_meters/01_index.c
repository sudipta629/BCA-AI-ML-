/*
====================================================
Write a C program to convert kilometers to meters
====================================================
*/

#include<stdio.h>
int main(){

    float km;
    printf("Enter the value of km");
    scanf("%f",&km);

    float m = km * 1000;
    printf("The value of m is %f",m);

    return 0;
}
