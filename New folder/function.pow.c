#include<stdio.h>
#include<math.h>
int main()

{
    int n,i,j,k;

    int name[100][100];
    int full[1000];
    scanf("%d",&n);


    for(i=1; i<=n; i++)
    {
        scanf("%s",name[i]);

    }

    for(i=1; i<=n; i++)
    {
        for(j=0; name[i][j]!='\0'; j++)
        {
            full[k++]=name[i][j];
        }
        full[k++]=' ';
        if(i==n)
            full[k++]='\0';
    }

    printf("%s",full);
}








