#include<stdio.h>
int main()
{
      int n;
    scanf("%d",&n);
    counter(&n);
}


int counter(int *n)
{ int p=*n;
     int arr[p],cnt,k,i;
    for(i=0;i<p;i++)
    {
        scanf("%d",&arr[i]);

    }
    scanf("%d",&k);
     for(i=0;i<p;i++)
            if (arr[i]>k || arr[i]<k)
        {
            cnt++;
        }
printf("%d",cnt);
}
