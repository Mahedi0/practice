#include<stdio.h>
int main()
{
    int n,i,cnt,k;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);

    }
    scanf("%d",&k);
     for(i=0;i<n;i++)
            if (arr[i]>k || arr[i]<k)
        {
            cnt++;
        }
    printf("%d",cnt);
    return 0;

}
