#include <stdio.h>
 int main()
 {
 int m;
 int n;
 int i;
 printf("Enter the value of m = ");
 scanf("%d",&m);
 printf("Enter the value of n = ");
 scanf("%d",&n);
 for(i=m;i<=n;i++)
{
if(i%2==0)
{
printf("Even numbers from %d to %d = %d\n ",m,n,i);
}
}
return 0;
}
