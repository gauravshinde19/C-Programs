// Program to accept character from user and display ASCII value of that character on the screen

#include <stdio.h>

void DisplayAscii(char ch)
{
    printf("ASCII value of character '%c' :\n%d", ch, ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf("%c", &cValue);

    DisplayAscii(cValue);

    return 0;
}
