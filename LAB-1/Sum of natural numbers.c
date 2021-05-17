                                            //Sum of Natural numbers
#include<stdio.h>
void main()
{
int n;
int i;
int s=0;
printf("Enter a number=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
s=s+i;
}
printf("sum of natural numbers=%d",s);
return 0;
}

