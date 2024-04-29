/* Program to accept integer from user and print that integer */

#include<stdio.h>

int main()
{
    int iValue = 0;

    printf("Enter the number that you want to display on screen :\n");
    scanf("%d", &iValue);

    printf("Number entered by you is %d", iValue);
}