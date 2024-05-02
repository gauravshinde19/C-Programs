/* Program to accept age from user and check whether is that person elligible for voting or not */

#include <stdio.h>
#include <stdbool.h>

bool CheckAge(int iAge)
{

    if (iAge >= 18)
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

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    bRet = CheckAge(iValue);

    if (bRet == true)
    {
        printf("Yes, Person is elligible for voting\n");
    }
    else
    {
        printf("No, Person is not elligible for voting\n");
    }

    return 0;
}