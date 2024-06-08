// Program to accept a number from user and find its cube root if that number is cube of a whole number

#include <stdio.h>
#include <stdbool.h>

int CubeRoot(int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if ((iCnt * iCnt * iCnt) == iNo)
        {
            bFlag = true;
            break;
        }
    }

    if (bFlag == true)
    {
        return iCnt;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number of which you want to find cube root :\n");
    scanf("%d", &iValue);

    iRet = CubeRoot(iValue);

    if (iRet != -1)
    {
        printf("Cube Root of %d :\n%d", iValue, iRet);
    }
    else
    {
        printf("%d is not a cube of any whole number", iValue);
    }

    return 0;
}
