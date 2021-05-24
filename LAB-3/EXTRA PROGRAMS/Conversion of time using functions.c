#include<stdio.h>
 int convert(int,int);
 int main()
{
   int h;
   int m;
   printf("Enter the time (hours:minutes) = ");
   scanf("%d:%d",&h,&m);
   convert(h,m);
}
 int convert(int h,int m)
 {
     int n;
     if(m>60)
     {
        h=h+1;
        n=m-60;
        printf("Time = %d hours:%d minutes",h,n);
     }
     else
     {
         printf("Time = %d hours: %d minutes",h,m);
     }
     return 0;
 }
