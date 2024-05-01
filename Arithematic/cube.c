/* Program to accept one integer from user and find its cube */

#include <stdio.h>

int FindCube(int iNo)
{
    int iAns = iNo * iNo * iNo;
    return iAns;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number of which you want cube:\n");
    scanf("%d", &iValue);

    iRet = FindCube(iValue);

    printf("Cube of %d :\n%d", iValue, iRet);

    return 0;
}