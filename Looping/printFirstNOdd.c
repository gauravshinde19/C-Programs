// Program to accept number from user and print first N odd numbers

#include <stdio.h>

void PrintOdd(int iNo)
{
    int iCnt = 0;

    if (iNo < 0)
    {
        return;
    }

    printf("Odd numbers :\n");
    for (iCnt = 1; iCnt <= (iNo * 2); iCnt++)
    {
        if ((iCnt % 2) != 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    PrintOdd(iValue);

    return 0;
}
