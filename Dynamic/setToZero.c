// Program to accept numbers from user dynamically and if number is greater than 100 then set it to 0

#include <stdio.h>
#include <stdlib.h>

void Updater(int Arr[], int iSize)
{
    int i = 0;

    for (i = 0; i < iSize; i++)
    {
        if (Arr[i] > 100)
        {
            Arr[i] = 0;
        }
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

    Updater(Brr, iCount);

    printf("Data after updation :\n");
    for (i = 0; i < iCount; i++)
    {
        printf("%d\n", Brr[i]);
    }

    free(Brr);

    return 0;
}
