#include<stdio.h>
#include<string.h>

int main()
{int i;
char s[100];
scanf("%s",&s);
int one=0,seven=0,nine=0;
for(i=0;i<strlen(s);i++)
{
    if(s[i]=='1')
        one++;
    else if(s[i]=='7')
        seven++;
    else if(s[i]=='9')
        nine++;
}
if(one>0 && seven>0 && nine>0)
    printf("Yes");
else
    printf("No");

return 0;
}
