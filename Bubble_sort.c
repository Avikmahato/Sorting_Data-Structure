#include<stdio.h>
#include<stdlib.h>

void bubblesort(int [],int);

int main()
{

    int arr[100],n,i;

    printf("Enter No Of Eleemnts:");
    scanf("%d",&n);

    printf("Enter %d Elements:",n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);

    bubblesort(arr,n);

    for(i=0;i<n;i++)
    printf("\n%d\n",arr[i]);
    return 0;
}
void bubblesort(int A[],int N)
{
 int m,n,temp;

    for(m=1;m<N;m++)
    for(n=0;n<N-m;n++)
    if(A[n]>A[n+1])
    {
        temp=A[n];
        A[n]=A[n+1];
        A[n+1]=temp;
    }   
}