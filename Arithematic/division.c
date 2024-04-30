/* Program to accept two floating numbers from user and perform their division */

#include <stdio.h>

float Division(float fNo1, float fNo2)
{
    float fAns = fNo1 / fNo2;
    return fAns;
}

int main()
{
    float fValue1 = 0.0;
    float fValue2 = 0.0;
    float fRet = 0.0;

    printf("Enter the first number:\n");
    scanf("%f", &fValue1);

    printf("Enter the second number:\n");
    scanf("%f", &fValue2);

    fRet = Division(fValue1, fValue2);

    printf("Division of %f and %f :\n%f", fValue1, fValue2, fRet);

    return 0;
}