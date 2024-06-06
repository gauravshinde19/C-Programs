// Program to accept string and another character from the user and check whether chracter entered by user is present in it or not if present then find its last occurrence position (case sensitive)

#include <stdio.h>

int CheckOccurrence(char *str, char ch)
{
    int iCnt = 1;
    int iPos = -1;

    while (*str != '\0')
    {
        if (*str == ch)
        {
            iPos = iCnt;
        }
        iCnt++;
        str++;
    }

    return iPos;
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
        printf("Last occurrence of Character is present at position :\n%d", iRet);
    }

    return 0;
}
