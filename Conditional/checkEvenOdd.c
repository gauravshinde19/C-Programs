/* Program to accept integer from user and check whether integer is even or odd */

#include <stdio.h>
#include <stdbool.h>

bool CheckEvenOdd(int iNo)
{

    if ((iNo % 2) == 0)
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
        printf("Number is Even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }

    return 0;
}
