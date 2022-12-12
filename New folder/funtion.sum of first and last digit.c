#include<stdio.h>

int sum_of_first_and_last_digit(int n);



int main()
{ int a,b;
scanf("%d",&b);

int arr;
a=sum_of_first_and_last_digit(b);


printf("%d",a);
  return 0;
}




int sum_of_first_and_last_digit(int n)
{int i,j;
int arr[n];
  for(i=0;i<n;i++)
  {
  scanf("%d",&arr[i]);
  }

  int cnt=0;

       for(i=0;i<n;i++)
   {
       cnt+=arr[i]%10;
       for(j=10;j<arr[i];j=j*10)
       {
           if((arr[i]/j)<10)
           {cnt+=arr[i]/j;
           break;}


       }

   }


       return cnt;
}



