#include<stdio.h>
#include<string.h>
int main()

{
    char s[100];int l=0,i=0;
    scanf("%s",s);

    while(s[i]!='\0')
    {i++;  l++;}
    for(i=l-1;i>=0;i--)
    {printf("%c",s[i]);}
  return 0;
}
