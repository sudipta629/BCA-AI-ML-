/*
====================================================
Write a C program to swap the values of two variables using a third variable
====================================================
*/

#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a and b");
    scanf("%d %d",&a,&b);

    c = a;
    a = b;
    b = c;

    printf("The value of a is %d",a);
    printf("The value of b is %d",b);

    return 0;
}