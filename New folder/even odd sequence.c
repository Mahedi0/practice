#include<stdio.h>
#include<string.h>

int main()
{


    int m,n,a,i;

    scanf("%d %d",&m,&n);
    int arr[m];
    int b=m/2;
    for(i=1; i<=m; i++)
    {

        if(i%2==0)
        {


            arr[a++]=i;
        }
        else if(i%2!=0)
        {
            arr[b++]=i;
        }

    }
     for(i=0; i<m; i++)
     {
         printf("%d ",arr[i]);
     }

    printf("\nThe 9th element in this sequence is : %d",arr[n-1]);
}
