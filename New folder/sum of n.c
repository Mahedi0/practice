#include<stdio.h>
int main()
{
int i,p,c,N;
printf("Enter the number:");
scanf("%d",&N);
p=N;
c=N;
for(p=N;p>=4;p=p/4+p%4)
{
c+=p/4;
}
printf("%d",c);

}
