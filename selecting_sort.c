#include <stdio.h>
#include <stdlib.h>

int sort(int a[], int n, int index)
{
    int min, loc, k;
    min = a[index];
    loc = index;
    for (k = index + 1; k < n; k++)
    {
        if (min > a[k])
        {
            min = a[k];
            loc = k;
        }
    }
    return loc;
}

int main()
{
    int i, temp, loc, n, arr[]={3,66,5,44,1,23,56,78,87,54};

    for (i = 0; i <=8; i++)
    {
        loc = sort(arr, 10, i);
        temp = arr[i];
        arr[i] = arr[loc];
        arr[loc] = temp;
    }
    for (i = 0; i < 10; i++)
    {
        {
            printf("\n%d\n", arr[i]);
        }
    }

    return 0;
}