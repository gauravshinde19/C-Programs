// Program to accept numbers from user dynamically and display the another number that you want to search is available or not

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool Search(int Arr[], int iSize, int iNo)
{
    int i = 0;
    bool bFlag = false;

    for (i = 0; i < iSize; i++)
    {
        if (Arr[i] == iNo)
        {
            bFlag = true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iCount = 0;
    int i = 0;
    int iValue = 0;
    int *Brr = NULL;
    bool bRet = false;

    printf("Enter number of elements that you want : \n");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements : \n");
    for (i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    printf("Enter the element that you want to search : \n");
    scanf("%d", &iValue);

    bRet = Search(Brr, iCount, iValue);
    if (bRet == true)
    {
        printf("Element is present in the array\n");
    }
    else
    {
        printf("Element is not present in the array\n");
    }

    free(Brr);

    return 0;
}
