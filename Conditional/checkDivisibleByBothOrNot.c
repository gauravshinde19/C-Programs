/* Program to accept integer from user and check whether number is divisible by 3 and 4 or not */

#include <stdio.h>
#include <stdbool.h>

bool CheckEvenOdd(int iNo)
{

    if (((iNo % 3) == 0) && ((iNo % 4) == 0))
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

    bRet = CheckEvenOdd(iValue);

    if (bRet == true)
    {
        printf("Number is divisible by 3 and 4\n");
    }
    else
    {
        printf("Number is not divisible by 3 and 4\n");
    }

    return 0;
}