/* Program to accept two floating numbers from user and perform their multiplication */

#include <stdio.h>

float Multiplication(float fNo1, float fNo2)
{
    float fAns = fNo1 * fNo2;
    return fAns;
}

int main()
{
    float fValue1 = 1.0;
    float fValue2 = 1.0;
    float fRet = 0.0;

    printf("Enter the first number:\n");
    scanf("%f", &fValue1);

    printf("Enter the second number:\n");
    scanf("%f", &fValue2);

    fRet = Multiplication(fValue1, fValue2);

    printf("Multiplication of %f and %f :\n%f", fValue1, fValue2, fRet);

    return 0;
}