#include<stdio.h>
#include<string.h>
int main()
{char str[100][50];
int l,i;
scanf("%d",&l);
for(i=0;i<l;i++)
{
    scanf("%s/n",&str[i]);


}

for(i=0;i<l;i++)
{
    printf("%s ",str[i]);


}
return 0;
}
