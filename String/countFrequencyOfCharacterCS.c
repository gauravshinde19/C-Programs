// Program to accept string and another character from the user and count frequency of that character (case sensitive)

#include <stdio.h>

int CountFrequency(char *str, char ch)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char Arr[100];
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", &Arr);

    printf("Enter the character that you want to serach :\n");
    scanf(" %c", &cValue);

    iRet = CountFrequency(Arr, cValue);

    printf("Frequency of that character :\n%d", iRet);

    return 0;
}
