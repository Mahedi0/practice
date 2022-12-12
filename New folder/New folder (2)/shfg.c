#include<stdio.h>
#include<string.h>


int main()
{
    int i,l;
char s[100];
scanf("%s",&s);
  l=strlen(s);
for(i=0;i<l;i++)
    {if(s[i]<=90 &&s[i]>64)
    s[i]+=32;
    else if(s[i]>=97  &&s[i]<123 )
     s[i]-=32;}

s[l]='\0';

for(i=0;i<l;i++)
{
    printf("%c",s[i]);
}
}
