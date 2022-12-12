#include<stdio.h>

int main()

{int n;int i,j;
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        sorting(arr[i],arr[i+1]);
    }
}
for(i=0;i<n;i++)
{
    pritnf("%d ",arr[i]);
}

return 0;
}

void sorting(int a,int b)
{int temp;
    if(a>b)
    {


a=temp;
a=b;
b=temp;
    }

}
