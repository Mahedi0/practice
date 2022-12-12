#include<stdio.h>
#include<string.h>
int main()
{
    int S;
    scanf("%s",&S);
    printf(" find(S)");
}



int find(char s)
{int i,l;
    l=strlen(s);

   char arr[i]=s[i];

   for(i=0;i<l;i++)
   { if(arr[i]=='7'&&arr[i]=='1'&&arr[i]=='9')
       return "Yes";
       else
        return "No";
   }
}
