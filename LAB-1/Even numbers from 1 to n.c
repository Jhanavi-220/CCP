                                            //Even Numbers from 1 to n
#include<stdio.h>
void main()
{
    int i=1;
    int n;
    printf("Enter the number=");
    scanf("%d",&n);
    while(i<=n)
    {
        if(i%2==0)
        {
            printf("Even Number=%d\n",i);
        }
        i++;
    }
    return 0;
}
