/* Program to print factorial of number entered by user using for loop*/ 

#include <stdio.h>

unsigned long int Factorial(int iNo)
{
    int iCnt = 0;
    unsigned long int iFact = 1;

    for (iCnt = 1; iCnt <= iNo; iCnt++)     
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{   
    int iValue = 0;
    unsigned long int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of %d :\n%lu", iValue, iRet);

    return 0;
}
