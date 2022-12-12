#include<stdio.h>

int all_divisors_of_N(int x);

int main()
{
    int N;
    scanf("%d",&N);
    all_divisors_of_N(N);
}



int all_divisors_of_N(int x)
{int i;

    for(i=0;i<=x;i++)
    {
        if(x%i==0)
           printf("%d ",i);
    }

}
