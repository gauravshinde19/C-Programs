/* program to print 1 to 10 */

#include<stdio.h>

int Display(int iNo)
{
    int iCnt = 0;
    printf("Numbers from 1 to 10");
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}

int main()
{
    int iValue = 10;
    Display(iValue);
    
    return 0;
}