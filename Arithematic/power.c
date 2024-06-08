/* Program to accept two numbers from user and return power */

#include<stdio.h>

int Power(int iNo1, int iNo2)
{
    int iCnt = 0;
    int iMult = 1;

    for (iCnt = 1; iCnt <= iNo2; iCnt++)
    {
        iMult = iMult * iNo1;
    }

    return iMult;
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter first number :\n");
    scanf("%d", &iValue1);

    printf("Enter second number :\n");
    scanf("%d", &iValue2);

    iRet = Power(iValue1, iValue2);

    printf("%d raise to %d :\n%d", iValue1, iValue2, iRet);

    return 0;
}
