#include<stdio.h>


int main()
{
    int n,i,k;

    scnaf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    sorting(arr,n);
    extern int k;
    scanf("%d",&k);

    printf("%d",k_th_largest(arr,n,k));
    printf("\n%d",k_th_smallest(arr,n,k));

    return 0;
}


int sorting(int arr[],int x)
{
    int i,j,temp;
    for(i=0; i<x; i++)
    {
        for(j=0; j<x; j++)
            if(arr[i]>arr[i+1])
                arr[i+1]=temp;
        arr[i+1]=arr[i];
        arr[i]=temp;
    }
    return arr;
}


int k_th_smallest(int arr[],int x)
{
    return arr[k-1];
}

int k_th_largest(int arr[],int x)
{
    int size=sizeof arr/sizeof(arr[0]);
    return (size-k);


}
