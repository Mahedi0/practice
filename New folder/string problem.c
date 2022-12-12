#include<stdio.h>
#include<string.h>
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
