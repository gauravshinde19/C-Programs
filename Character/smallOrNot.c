// Program to accept character from user and check whether character is small or not

#include <stdio.h>
#include <stdbool.h>

bool CheckSmall(char ch)
{
    if ((ch >= 'a') && (ch <= 'z'))
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

    bRet = CheckSmall(cValue);

    if (bRet == true)
    {
        printf("It is small letter");
    }
    else
    {
        printf("It is not small letter");
    }

    return 0;
}
