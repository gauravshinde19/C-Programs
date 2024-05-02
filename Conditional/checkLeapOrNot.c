/* Program to accept year from user and check whether is it leap year or not */

#include <stdio.h>
#include <stdbool.h>

bool CheckLeap(int iYear)
{

    if (((iYear % 4 == 0) && (iYear % 100 != 0)) || (iYear % 400 == 0))
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter the Year : \n");
    scanf("%d", &iValue);

    bRet = CheckLeap(iValue);

    if (bRet == true)
    {
        printf("%d is a leap year\n", iValue);
    }
    else
    {
        printf("%d is not a leap year\n", iValue);
    }

    return 0;
}