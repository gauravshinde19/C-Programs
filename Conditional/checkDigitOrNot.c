// Program to accept character from user and check whether character is digit or not

#include <stdio.h>
#include <stdbool.h>

bool CheckDigit(char ch)
{
    if ((ch >= '0') && (ch <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character :\n");
    scanf("%c", &cValue);

    bRet = CheckDigit(cValue);

    if (bRet == true)
    {
        printf("It is digit");
    }
    else
    {
        printf("It is not digit");
    }

    return 0;
}
