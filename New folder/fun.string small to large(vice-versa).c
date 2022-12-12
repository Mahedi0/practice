 #include<stdio.h>
 int main()
 {
     char s[100];
     int i = 0;

     // take input
     scanf("%s", s);
     while( s[i] != '\0' )
     {

        if( s[i] >= 'a' && s[i] <= 'z' &&s[i]%2==0 )
        {
           s[i] = s[i] - 32;
        }
        i++;
     }

     puts(s);

     return 0;
 }
