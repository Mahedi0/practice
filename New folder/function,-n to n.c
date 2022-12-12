#include<stdio.h>
void nto_n(int x)
{int i,j;
    if (x>0)
    {

        for(i=x; i>=-x; i--)
        {
           printf("%d ",i);
        }
    }
    else
    {
      for(j=x; j<=-x; j++)
            printf("%d ",j);
    }
}


int  main()
{
    int n;
    scanf("%d",&n);
    nto_n(n);

return 0;
}
