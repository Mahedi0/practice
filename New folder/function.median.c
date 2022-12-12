#include<stdio.h>
#include<string.h>
float median(int arr[],int n);

int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

    float a=median(arr,n);
    printf("median is: %0.2f",a);

}

float median(int arr[],int n)
{
    int i,j,temp;
    float a;
    arr[n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            if(arr[i]>arr[i+1])
            {
                temp=arr[i+1];
                arr[i+1]=arr[i];
                arr[i]=temp;
            }

        }
    }
    if(n%2==0)
    {
        a=arr[n/2-1]+arr[n/2];
        return a/2;

    }
    else if(n%2!=0)
        return arr[n/2];

}
