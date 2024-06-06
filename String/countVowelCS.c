// Program to accept string from the user and display the count of vowel letters (case sensitive)

#include <stdio.h>

int CountVowel(char *str)
{
    int iCnt = 0;

    while (*str != '\0')
    {
        if ((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u'))
        {
            iCnt++;
        }
        str++;
    }

    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", &Arr);

    iRet = CountVowel(Arr);

    printf("Length of the vowel letters in string :\n%d", iRet);

    return 0;
}
