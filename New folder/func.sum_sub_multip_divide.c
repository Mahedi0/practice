#include<stdio.h>
#include<string.h>



int multiple(int x,int y);
int sum(int x,int y);
int substruction(int x,int y);
int divide(int x,int y);



int main()
{
    int a,b,i;
    char s;
    scanf("%c",&s);

    scanf("%d%d",&a,&b);
    if(s=='*')
    {
        printf("%d",multiple(a,b));
    }
    else if(s=='+')
    {
        printf("%d",sum(a,b));
    }
     else if(s=='-')
    {
        printf("%d",substruction(a,b));
    }
    else if(s=='/')
    {
        printf("%d",divide(a,b));
    }
else
    printf(" ");

    return 0;
}





int multiple(int x,int y)
{
    return (x*y);
}
int sum(int x,int y)
{
    return (x+y);
}

int substruction(int x,int y)
{
    return (x-y);
}
int divide(int x,int y)
{
    return (x/y);
}
