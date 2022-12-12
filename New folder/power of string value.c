#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
    char s[1000];
    scanf("%s",&s);
    int l=strlen(s);
    int sum =0;
    int cnt=0;
    for(int i=0; i<l; i++)
    {



        int a=s[i]-96;
        sum=sum+a;

    }

int m=0;
    for(int j=0; j<sum; j++)
    {


        if (pow(2,j)==sum)
        {
            cnt=1;
            m=j;

        }

    }

    if(cnt==1)

    {
        printf("Yes\ncost=2^%d",m);
    }
    else
    {
        printf("No");
    }

    return 0;
}
