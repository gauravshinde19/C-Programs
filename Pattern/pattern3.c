/*  
    Program to accept number from user and display following pattern
    Input : 5
    Output : &    &    &    &    &    *    *    *    *    *    $    $    $    $    $ 
*/        

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("&\t");
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("$\t");
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
