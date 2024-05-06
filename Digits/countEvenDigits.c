/* Program to accept number from user and count even digits of the number */

#include<stdio.h>

int CountEvenDigits(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    
    if (iNo < 0)
    {
        iNo = -iNo;
    }

    while (iNo != 0)
    {
        iDigit = iNo % 10;
        if (iDigit % 2 == 0)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }
    return iCount;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    iRet = CountEvenDigits(iValue);
    printf("Number of even digits in %d :\n%d", iValue, iRet);

    return 0;
}
