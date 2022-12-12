#include<string.h>
#include<stdio.h>

int main()
{
    int N;long long int i,j=1;
    scanf("%d\n",&N);
    long long int Arr[N];
    int sum;
    for(i=0;i<N;i++)
    {
        scanf("%d",&Arr[i]);
        //sum+=Arr[i]%10;
      for(j=1;j<=Arr[i];j=j*10)
      {
          int a=Arr[i]/j;
          if(a%j<j)
          {printf("%d",j);
              //sum+=Arr[i]%j;

          }

      }
    }

printf("%lld",sum);
    return 0;
}
