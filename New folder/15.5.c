#include<stdio.h>
int main()
{
    int N,i,j;
    scanf("%d\n",&N);
    int arr[N][N];
    for(int i=0; i<N; i++)
    {
        for(int j=0; j<N; j++)
        {
            scanf("%d",&arr[i][j]);
        }

    }
    printf("\n\n");



    for(int i=0; i<N; i++)

    {printf("row-%d and column-%d = ",i+1,i+1);
        for(int j=0; j<N; j++)

        {

            if(arr[j][i]!=arr[i][j])
            {
                printf("%d ",arr[i][j]);

            }

        }
        for(int k=0; k<N; k++)
        {
            if(arr[i][k]!=arr[k][i])
            {
                printf("%d ",arr[k][i]);
            }
        }
        printf("\n");
    }

    return 0;
}
