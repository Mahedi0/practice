#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c;

    printf("fist side of triangle:");
    scanf("%f",&a);
    printf("second side of triangle:");
    scanf("%f",&b);
    printf("third side of triangle:");
    scanf("%f",&c);

    float s;
    s=(a+b+c)/2;
    float area;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("the triangle area is: %f",area);
    return 0;
}

