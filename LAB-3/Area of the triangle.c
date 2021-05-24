#include<stdio.h>
#include<math.h>
 float Area_of_a_triangle(float , float , float );
 int main()
{
   float a, b, c, Area;
   printf("Enter the sides of triangle= ");
   scanf("%f%f%f",&a,&b,&c);
   Area = Area_of_a_triangle(a, b, c);
   printf("Area of triangle = %f", Area);
   return 0;
}

float Area_of_a_triangle( float a, float b, float c )
{
   float sum, Area;
   sum = (a+b+c)/2;
   Area = sqrt(sum*(sum-a)*(sum-b)*(sum-c));
   return Area;
}
