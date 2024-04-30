/* Program to accept dividend and divisor from user and find the remiander */

#include<stdio.h>

float findRemainder(int iNo1, int iNo2)
{
    int iAns = iNo1 % iNo2;
    return iAns;
}

int main()
{
    int iValue1 = 0.0;
    int iValue2 = 0.0;
    int iRet = 0.0;

    printf("Enter the dividend:\n");
    scanf("%d", &iValue1);

    printf("Enter the divisor:\n");
    scanf("%d", &iValue2);

    iRet = findRemainder(iValue1, iValue2);

    printf("Remainder :\n%d", iRet);

    return 0;
}