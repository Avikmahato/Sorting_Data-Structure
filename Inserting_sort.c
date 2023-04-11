#include <stdio.h>
#include <stdlib.h>

void inserting_sort(int Arr[], int size)
{
    int i, j, temp;

    for (i = 1; i < size; i++)
    {
        temp = Arr[i];
        for (j = i - 1; i >= 0 && temp < Arr[j]; j--)
        {
            Arr[j + 1] = Arr[j];
        }
        Arr[j + 1] = temp;
    }
}

int main()
{
    int arr[] = {68, 94, 88, 90, 81, 80};
    int size, i;
    size = sizeof(arr) / sizeof(arr[0]);

    inserting_sort(arr, size);
    for (i = 0; i < size; i++)
        printf("\n%d\n", arr[i]);

    return 0;
}