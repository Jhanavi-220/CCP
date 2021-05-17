                                              //Factorial of a number
#include<stdio.h>
void main()
{
int n;
int a=1;
int b=1;
printf("Enter a number=");
scanf("%d",&n);
while(a<=n)
{
b=b*a;
a++;
}
printf("Factorial of %d=%d",n,b);
return 0;
}
