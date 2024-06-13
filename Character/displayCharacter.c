// Program to accept character from user and display that character on the screen

#include <stdio.h>

void Display(char ch)
{
    printf("Entered character :\n%c", ch);
}

int main()
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}
