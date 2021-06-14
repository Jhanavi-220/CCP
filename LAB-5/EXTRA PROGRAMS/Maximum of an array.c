#include <stdio.h>

int main()

{
  int a[10],i,n,max;
  printf("Enter the number of elements in array = \n");
  scanf("%d",&n);
  printf("Enter the elements in the array = \n");
  for(i=0;i<n;i++)
  {
  scanf("%d", &a[i]);
  }
  max=a[0];
  for(i=1;i<n;i++)
  {
  if(a[i]>max)
  {
  max=a[i];
  }
  }
  printf("Maximum element in an array = %d\n",max);
  }

