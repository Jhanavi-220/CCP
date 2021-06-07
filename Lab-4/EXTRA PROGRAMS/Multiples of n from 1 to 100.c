#include<stdio.h>
void main()
{
int n;
int i;
printf("Enter a number = ");
scanf("%d",&n);
for(i=1;i<=100;i++)
{
if(i%n==0)
{
printf("%d\t",i);
}
}
}
