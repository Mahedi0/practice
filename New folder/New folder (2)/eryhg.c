#include<stdio.h>
int even_num(int x);


int main()
{


int n;
scanf("%d",&n);
even_num(n);

}

int even_num(int x)
{


int i;
for(i=2;i<=x;i=i+2)
{
printf("%d ",i);

}
return i;
}
