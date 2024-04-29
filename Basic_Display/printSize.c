/* Program to print size of datatypes */

#include<stdio.h>

int main()
{
    int iValue;
    float fValue;
    double dValue;
    char cValue;

    printf("Size of Integer is %d bytes\n", sizeof(iValue));
    printf("Size of Float is %d bytes\n", sizeof(fValue));
    printf("Size of Double is %d bytes\n", sizeof(dValue));
    printf("Size of Character is %d bytes\n", sizeof(cValue));
}