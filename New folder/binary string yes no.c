#include<stdio.h>
#include<string.h>

int is_binary(char x[1002]);


int main()
{
    char s[1002];
    scanf("%s",s);
    int l=strlen(s);
    //printf("%d",l);
    int cnt=0;
    for(int i=0; i<l; i++)
    {

        if(s[i]=='1'|| s[i]=='0')
        {
            cnt++;
        }
        else
        {
            break;
        }

    }
    if(cnt==l)
    {
        printf("YES");
    }
    else
        printf("NO");


    return 0;
}


int is_binary(char x[1002])
{
  int l=strlen(x);
    int cnt=0;
    for(int i=0; i<l; i++)
    {

        if(x[i]=='1'|| x[i]=='0')
        {
            cnt++;
        }
        else
        {
            break;
        }

    }

    return cnt;
}
