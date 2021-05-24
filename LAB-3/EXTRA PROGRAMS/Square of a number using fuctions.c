#include<stdio.h>
#include<math.h>
 int Square_of_number(int);
 int main()
{
   int n;
   printf("Enter a number = ");
   scanf("%d",&n);
   Square_of_number(n);

}
int Square_of_number(int n)
{
    int square;
    square=n*n;
    printf("Square of a number =%d",square);
    return 0;

}
