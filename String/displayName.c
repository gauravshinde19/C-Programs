// Program to accept full name from the user and print that name

#include <stdio.h>

int main()
{
    char Arr[50];

    printf("Enter your full name :\n");
    scanf("%[^'\n']s", Arr);

    printf("Hello : %s\n", Arr);

    return 0;
}
