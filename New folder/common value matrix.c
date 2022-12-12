#include<stdio.h>
#include<string.h>

int main()
{
    int N,j,i;
    scanf("%d",&N);
    int arr[N][N];
  // Using nested loop to store values in a 2d array
  for (int i = 0; i < N; ++i)
  {
    for (int j = 0; j < N; ++j)
    {
      scanf("%d", &arr[i][j]);
    }
  }
    for(i=0; i<N; ++i)

    {
        for(j=0; j<N; ++j)
        {
            printf("%d ",&arr[i][j]);

        }
printf("\n");
    }

    return 0;
}
