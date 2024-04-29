/* Program to accept character from user and print ascii value of that character */

#include<stdio.h>

int main()
{
    char ch = '\0';

    printf("Enter the character :\n");
    scanf("%c", &ch);

    printf("Ascii value of %c is %d", ch, ch);
}