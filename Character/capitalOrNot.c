// Program to accept character from user and check whether character is capital or not

#include <stdio.h>
#include <stdbool.h>

bool CheckCapital(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
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

    bRet = CheckCapital(cValue);

    if (bRet == true)
    {
        printf("It is capital letter");
    }
    else
    {
        printf("It is not capital letter");
    }

    return 0;
}
