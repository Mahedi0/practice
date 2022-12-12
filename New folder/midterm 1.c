#include<stdio.h>
#include<string.h>
int main()
{
    char a,m;
    scanf("%d",&m);
    char arr[m][m];
    fgets(arr,sizeof(arr),stdin);

    for(int i=0;i<m;i++)
    {
        //for(int j=0;j<m;i++)

            scanf("%s",&arr[i][i]);

    }






    return 0;
}
