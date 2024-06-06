// Program to accept string and another character from the user and check whether chracter entered by user is present in it or not (case sensitive)

#include <stdio.h>
#include <stdbool.h>

bool CheckOccurrence(char *str, char ch)
{
    bool bFlag = false;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }

    return bFlag;
}

int main()
{
    char Arr[100];
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", &Arr);

    printf("Enter the character that you want to serach :\n");
    scanf(" %c", &cValue);

    bRet = CheckOccurrence(Arr, cValue);

    if (bRet == true)
    {
        printf("Character is present");
    }
    else
    {
        printf("Character is not present");
    }

    return 0;
}
