#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    int arr[n][n];
    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
            scanf("%d",&arr[i][j]);
    }

    for(i=0; i<n; i++)
    {
        for(j=0; j<=i; j++)
            {printf("%d ",arr[i][j]);}

            printf("\n");
    }
}
