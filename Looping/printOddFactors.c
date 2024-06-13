
// Program to accept number from user and print odd factors of that number

#include <stdio.h>

void DisplayOddFactor(int iNo)
{
    int i = 0;

    if (iNo < 0)
    {
        iNo = -iNo;
    }

    printf("Odd Factors of %d :\n", iNo);
    for (i = 1; i <= (iNo / 2); i++)
    {
        if (((iNo % i) == 0) && ((i % 2) != 0))
        {
            printf("%d\n", i);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number : \n");
    scanf("%d", &iValue);

    DisplayOddFactor(iValue);

    return 0;
}
