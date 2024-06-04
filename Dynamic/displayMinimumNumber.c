// Program to accept numbers from user dynamically and display minimum number

#include <stdio.h>
#include <stdlib.h>

int Minimum(int Arr[], int iSize)
{
    int i = 0;
    int iMin = Arr[0];

    for (i = 0; i < iSize; i++)
    {
        if (Arr[i] < iMin)
        {
            iMin = Arr[i];
        }
    }

    return iMin;
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

    iRet = Minimum(Brr, iCount);

    printf("Minimum number :\n%d", iRet);

    free(Brr);

    return 0;
}
