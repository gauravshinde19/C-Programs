/*
    Program to accept number from user and display following pattern
    Input - row = 6, col = 6
    Output - *    *    *    *    *    *
             *    #    #    #    *    *
             *    #    #    *    $    *
             *    #    *    $    $    *
             *    *    $    $    $    *
             *    *    *    *    *    *
*/

#include <stdio.h>
void Pattern(int iRow, int iCol)
{
    int i = 0;
    int j = 0;

    if (iRow != iCol)
    {
        printf("Number of rows and columns should be same\n");
        return;
    }

    printf("Pattern :\n");
    for (i = 1; i <= iRow; i++)
    {
        for (j = 1; j <= iCol; j++)
        {
            if (i == 1 || j == 1 || i == iRow || j == iCol || ((i + j) == (iRow + 1)))
            {
                printf("*\t");
            }
            else if (j > iCol - i + 1)
            {
                printf("$\t");
            }
            else
            {
                printf("#\t");
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number of rows :\n");
    scanf("%d", &iValue1);

    printf("Enter the number of columns :\n");
    scanf("%d", &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}
