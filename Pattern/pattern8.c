/*  
    Program to accept number from user and display following pattern
    Input : 5
    Output : -5    5   -4    4   -3    3   -2    2   -1    1       
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
 
    for (iCnt = -iNo; iCnt < 0; iCnt++)
    {
        printf("%d\t", iCnt);
        printf("%d\t", -iCnt);
    }
    printf("\n");
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}
