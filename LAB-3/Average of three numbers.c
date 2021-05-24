#include<stdio.h>
 float Average_of_three_numbers(int , int , int );
 int main()
{
   int a, b, c;
   printf("Enter three numbers = ");
   scanf("%d%d%d",&a,&b,&c);
   Average_of_three_numbers(a,b,c);

}
float Average_of_three_numbers(int a,int b,int c )
{
    float Average;
    Average=(a+b+c)/3.0;
    printf("Average of three numbers=%f",Average);

}
