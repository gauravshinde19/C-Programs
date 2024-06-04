// Program to accept numbers from user dynamically and display the frequency of another number that you want to search

#include <stdio.h>
#include <stdlib.h>

int Search(int Arr[], int iSize, int iNo)
{
    int i = 0;
    int iFrequency = 0;

    for (i = 0; i < iSize; i++)
    {
        if (Arr[i] == iNo)
        {
            iFrequency++;
        }
    }

    return iFrequency;
}

int main()
{
    int iCount = 0;
    int *Brr = NULL;
    int i = 0;
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number of elements that you want :\n");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements :\n");
    for (i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    printf("Enter the element that you want to serach :\n");
    scanf("%d", &iValue);

    iRet = Search(Brr, iCount, iValue);

    printf("Frequency of that number :\n%d", iRet);

    free(Brr);

    return 0;
}
