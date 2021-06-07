#include<stdio.h>
void main()
{
int a,b,c;
int s;
printf("Enter three numbers = ");
scanf("%d%d%d",&a,&b,&c);
s=a<b?(a<c?a:c):(b<c?b:c);
printf("Smallest number = %d",s);
return 0;
}
