                                                       //Prime number
#include<stdio.h>
void main()
{
int n;
int i;
int a=0;
printf("Enter a number=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
if(n%i==0)
{
a++;
}
}
if(a==2)
{
printf("It is a prime number");
}
else
{
printf("It is not a prime number");
}
return 0;
}
