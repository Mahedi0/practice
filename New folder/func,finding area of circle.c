#include<stdio.h>
float circle_area(int p);


int main()
{int R;
scanf("%d",&R);
float area=(3.1416*R*R);
printf("%f",circle_area(R));

return 0;
}

float circle_area(int p)
{
float area=3.1416*p*p;
return area;
}
