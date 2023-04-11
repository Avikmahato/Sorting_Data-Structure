#include<stdio.h>
#include<stdlib.h>

void bubblemsort(int[],int);
int main()
{

    int arr[100],n,i;

    printf("Enter No Of Elements:");
    scanf("%d",&n);
    printf("Enter %d Elements :",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    bubblemsort(arr,n);

    for(i=0;i<n;i++)
    {
        printf("\n%d\n",arr[i]);
    }

    return 0;
}
void bubblemsort(int A[],int N)
{
    int m,n,temp,flag;

    for(m=1;m<N;m++)
    {
        flag=0;
        for(n=0;n<N-m;n++)
        {
            if(A[n]>A[n+1])
            {
                flag=1;
                temp=A[n];
                A[n]=A[n+1];
                A[n+1]=temp;
            }
        }
        if(flag==0)
        {
        printf("Round:%d",m);
        return;
        }
    }
}