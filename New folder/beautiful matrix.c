#include<stdio.h>

int main()
{
    int x,y,i,j;
    int arr[5][5];
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {

            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1)
            {
                x=i;
                y=j;
            }
        }
    }

    int ans=0;
    if(x>2)
    {
        ans+=(x-2);
    }
    else
    {
        ans+=(2-x);
    }
    if(y>2)
    {
        ans+=(y-2);
    }
    else
    {
        ans+=(2-y);
    }

    printf(" \n%d",ans);


}
