#include<stdio.h>
void main()
{
int n;
int a;
int sum=0;
printf("Enter a number = ");
scanf("%d",&n);
while(n!=0)
{
a=n%10;
sum=sum+a;
n=n/10;
}
printf("Sum of digits = %d",sum);
}
