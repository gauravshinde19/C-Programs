// Program to accept numbers from user dynamically and display count of numbers which are divisible by 5 and 3

#include <stdio.h>
#include <stdlib.h>

int Divisible(int Arr[], int iSize)
{
    int i = 0;
    int iFrequency = 0;

    for (i = 0; i < iSize; i++)
    {
        if (((Arr[i] % 5) == 0) && ((Arr[i] % 3) == 0))
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
    int iRet = 0;

    printf("Enter the number of elements that you want :\n");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements :\n");
    for (i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    iRet = Divisible(Brr, iCount);

    printf("Frequency of elements which are divisible by 5 and 3 :\n%d", iRet);

    free(Brr);

    return 0;
}
