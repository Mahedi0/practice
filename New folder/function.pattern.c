#include<stdio.h>
#include<string.h>
void pattern(int x)
{
   int i=2, j, p
   a=(x*(x+1))/2;
   int arr[a];

   while(i <= a){

     /* Initially P is 1. */

      p = 1;

      for(j = 2; j < i; j++){

       /* Check if it is divisible by any other number,
          other than 1 or itself. */

         if(i % j == 0) {
            p = 0;
         }
    }


    i++;
  }

 return 0;
}







int main()
{
int i,j,k;



return 0;
}
