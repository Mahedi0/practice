#include<stdio.h>

int main()
{
    int N,i;
    scanf("%d",&N);
    for(i=0;i<= N;i++)
    {
        if((N%i)==0)
        {
            printf("%d ",i);
        }
    }
    return 0;
}



