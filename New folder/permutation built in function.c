#include<stdio.h>
#include<string.h>
int fect(int x);



int main()
{
    int n,r;
    scanf("%d %d",&n,&r);
    int comb,perm;
    perm=fect(n)/fect(n-r);
    comb=fect(n)/(fect(n-r)*fect(r));

    printf("nPr: %d\nnCr: %d",perm,comb);

    return 0;
}


int fect(int x)
{
    int i;
    long long int fect=1;
    for(i=1; i<=x; i++)
    {
        fect*=i;
    }

    return fect;
}


