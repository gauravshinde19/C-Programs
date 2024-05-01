/* Program to accept one integer from user and find its square */

#include <stdio.h>

int FindSquare(int iNo)
{
    int iAns = iNo * iNo;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number of which you want square:\n");
    scanf("%d", &iValue);

    iRet = FindSquare(iValue);

    printf("Square of %d :\n%d", iValue, iRet);

    return 0;
}