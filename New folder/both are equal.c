#include<stdio.h>
#include<math.h>
int main()
{
   int a,b,c;
   printf("Input three integer number:");
   scanf("%d%d%d",&a,&b,&c);

   if (a>b&&a>c)
   {printf("A is bigger");
   }
   else if (b>c)
   {printf("B is bigger");
   }

   else if (a==b && c<a)
   {
       printf("A and B both are bigger");
   }
   else if (a==c && c<b)
   {printf("A and C both are bigger");

   }
   else if (b==c && c<b)
   {
       printf("B and C both are bigger");
   }
   else
   {
    printf("c is bigger");
   }


