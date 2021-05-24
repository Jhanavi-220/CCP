#include<stdio.h>
int main()
{
	int d,n,m;
	printf("Enter the number = ");
	scanf("%d",&d);
	n=d%100;
    m=n/10;
    printf("Ten's place of a given number %d = %d",d,m);
    return 0;
}
