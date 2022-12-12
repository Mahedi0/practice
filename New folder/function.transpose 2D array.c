#include<stdio.h>

int main()
{int i,j,temp;
    int arr[3][3];
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        scanf("%d",&arr[i][j]);
    }
}
int brr[3][3];
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {

brr[i][j]=arr[j][i];

    }
}
printf("Transpose of the matrix: \n");
for(i=0;i<3;i++)
{
    for(j=0;j<3;j++)
    {
        printf("%d ",brr[i][j]);
    }
    printf("\n");
}

return 0;
}

