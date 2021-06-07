#include<stdio.h>
#include<math.h>
void main()
{
int a;
int b;
int c;
double x;
double i;
double j;
int denominator;
printf("Enter the values of a,b,c = ");
scanf("%d%d%d",&a,&b,&c);
x=(b*b)-4*a*c;
denominator=2*a;
if(x>0)
{
i=(-b+sqrt(x))/denominator;
j=(-b-sqrt(x))/denominator;
printf("The roots are Real and distinct \nRoots = %lf\t%lf",i,j);
}
else if(x==0)
{
i=-b/denominator;
printf("The roots are Equal \nRoots = %lf",i);
}
else
{
   i=b/denominator;
    j=-b/denominator;
printf("The roots are Imaginary \nRoots = %lf\t%lf",i,j);
}
}
