#include<stdio.h>
#include<string.h>
int main()
{
    int m;
    scanf("%d",&m);
    char s[m];
    fgets(s,sizeof(s),stdin);



    for(int i=0;i<m-1;i++)
    {


            scanf("%s\n",&s[i]);

    }
 for(int i=0;i<m;i++)
   {if(i!='\0')

   printf("%s ",s[i]); }
}



