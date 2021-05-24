#include<stdio.h>
 int Sum_of_natural_numbers(int);
 int main()
{
   int n;
   printf("Enter the number = ");
   scanf("%d",&n);
   Sum_of_natural_numbers(n);

   }
 int Sum_of_natural_numbers(int n)
 {
  int i;
  int s=0;
   for(i=1;i<=n;i++)
    {
      s=s+i;
    }
    printf("sum of natural numbers=%d",s);
 }
