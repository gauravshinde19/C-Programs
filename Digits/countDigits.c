/* Program to accept number from user and count digits of the number */

#include<stdio.h>

int CountDigits(int iNo)
{
    int iCount = 0;
    
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iNo = iNo / 10;
        iCount++;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = CountDigits(iValue);
    printf("Number of digits in %d :\n%d", iValue, iRet);

    return 0;
}
