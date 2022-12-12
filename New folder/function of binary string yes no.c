#include<stdio.h>
#include<string.h>

int is_binary(char x[1002]);


int main()
{
    char s[1002];
    scanf("%s",s);
if (is_binary(s)==1)
  printf("Yes");
  else
    printf("No");



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

    if(cnt==l)
    {
return 1;    }
    else
        return 0;


}
