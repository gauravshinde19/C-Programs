// Program to accept numbers from user dynamically and swap that numbers

#include <stdio.h>
#include <stdlib.h>

void Reverse(int Arr[], int iSize)
{
    int iStart = 0;
    int iEnd = 0;
    int Temp = 0;

    iStart = 0;
    iEnd = iSize - 1;

    while (iStart < iEnd)
    {
        Temp = Arr[iStart];
        Arr[iStart] = Arr[iEnd];
        Arr[iEnd] = Temp;

        iStart++;
        iEnd--;
    }
}

int main()
{
    int iCount = 0;
    int *Brr = NULL;
    int i = 0;

    printf("Enter the number of elements that you want :\n");
    scanf("%d", &iCount);

    Brr = (int *)malloc(iCount * sizeof(int));

    printf("Enter the elements :\n");
    for (i = 0; i < iCount; i++)
    {
        scanf("%d", &Brr[i]);
    }

    Reverse(Brr, iCount);

    printf("Elements after reverse :\n");
    for (i = 0; i < iCount; i++)
    {
        printf("%d\n", Brr[i]);
    }

    free(Brr);

    return 0;
}
