#include<stdio.h>

int is_last_digit_zero_with_sum(int arr[],int x);



int  main()
{
    int n,i;
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
    ;
    printf("%d",is_last_digit_zero_with_sum(arr,n));
    return 0;
}

int is_last_digit_zero_with_sum(int arr[],int x)
{
    int i,sum;
    for(int i=0; i<x; i++)
    {
        if(arr[i]%10==0)
        {
            sum+= arr[i];
        }
    }
    return sum;

}
