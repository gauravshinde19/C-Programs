// Program to accept numbers from user dynamically and display addition of even numbers

#include <stdio.h>
#include <stdlib.h>

int AdditionEven(int Arr[], int iSize)
{
    int i = 0;
    int iSum = 0;

    for (i = 0; i < iSize; i++)
    {
        if ((Arr[i] % 2) == 0)
        {
            iSum = iSum + Arr[i];
        }
    }

    return iSum;
}

int main()
{
    int iCount = 0;
    int *Brr = NULL;
    int i = 0;
    int iRet = 0;

    printf("Enter the number of elements that you want :\n");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements :\n");
    for (i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    iRet = AdditionEven(Brr, iCount);

    printf("Addition of even elements :\n%d", iRet);

    free(Brr);

    return 0;
}
