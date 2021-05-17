#include<stdio.h>
#include<math.h>
int main()
{
int x1;
int x2;
int y1;
int y2;
float d=0.0;
printf("Enter four coordinates=");
scanf("%d %d %d %d",&x1,&x2,&y1,&y2);
d=sqrt(sqrt(pow((x2-x1),2))+pow((y2-y1),2));
printf("Distance=%f",d);
return 0;
}
