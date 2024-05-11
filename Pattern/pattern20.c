/*
    Program to accept number from user and display following pattern
    Input : rows = 4, columns = 4
    Output :    $    2    3    4
                1    $    3    4
                1    2    $    4
                1    2    3    $
*/

#include <stdio.h>

void Display(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    if (iRow != iCol)
    {
        printf("Number of rows and columns should be same");
        return;
    }
    
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i == j)
            {
                printf("$\t");
            }
            else
            {
                printf("%d\t", j);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows:\n");
    scanf("%d", &iValue1);

    printf("Enter the number of columns:\n");
    scanf("%d", &iValue2);

    Display(iValue1, iValue2);

    return 0;
}
