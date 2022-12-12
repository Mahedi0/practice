#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    int M,N;
    scanf("%d%d",&M,&N);
    int ar[N][M];
    int i,j,k,l,m,n;
    int br[N][M];
    int cr[N][M];


    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
            scanf("%d",&ar[i][j]);
    }

    printf("\n\n\n");

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
            scanf("%d",&br[i][j]);
    }
//Multiplication
    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
        {
            for(k=0;k<M;k++)
                {
                cr[j][k]+=ar[j][k]*br[k][j];

            }
            //cr[i][j]=ar[i][j]*br[j][i]+ar[i][j]*br[j+1][i]      [j+1]*br[i+1][j] +ar[i][j+2]*br[i+2][i] ;

        }
    }

    for(i=0; i<N; i++)
    {
        for(j=0; j<M; j++)
            printf("%d  ",cr[i][j]);
        printf("\n");
    }
    return 0;
}
