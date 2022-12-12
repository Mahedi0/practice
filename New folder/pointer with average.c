#include<stdio.h>


int main()
{
int m,n;
int *p=&m;
int *q=&n;
scanf("%d%d",p,q);

float sum=(*p+*q);
printf("%0.3f",sum/2);
return 0;
}
