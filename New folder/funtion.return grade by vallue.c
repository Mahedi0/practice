#include<stdio.h>
char grade(int n);

int main()
{
    char a=grade(90);

}

char grade(int n)
{


    if(n>80 && n<101)
    {
        printf("A");
    }
    else if(n >59 && n<80)
    {
        printf("B");
    }
    else if(n>39 && n<60)
    {
        printf("C");
    }

    else if(n>0 && n<40)
    {
        printf("F");
    }

}
