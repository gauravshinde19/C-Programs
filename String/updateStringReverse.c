// Program to accept string from user and display it in reverse without using strrev()

#include <stdio.h>

void strrevX(char *str)
{
    char *start = str;
    char *end = str;
    char temp;

    while (*end != '\0')
    {
        end++;
    }
    end--;

    while (start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main()
{
    char Arr[100];
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", &Arr);

    strrevX(Arr);

    printf("Reverse string :\n%s", Arr);

    return 0;
}
