// Program to accept string and another character from the user and check whether chracter entered by user is present in it or not if present then find its first occurrence position (case sensitive)

#include <stdio.h>
#include <stdbool.h>

int CheckOccurrence(char *str, char ch)
{
    int iCnt = 1;
    bool bFlag = false;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            bFlag = true;
            break;
        }
        iCnt++;
        str++;
    }

    if (bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
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

    iRet = CheckOccurrence(Arr, cValue);

    if (iRet == -1)
    {
        printf("Charater is not present");
    }
    else
    {
        printf("Charater is present at position :\n%d", iRet);
    }

    return 0;
}
