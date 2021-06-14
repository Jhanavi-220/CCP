#include<stdio.h>
void main()
{
    int a[10],n,i,p=0,small;
    printf("Enter the number of elements in the array = \n");
    scanf("%d",&n);
    printf("Enter the elements of array = \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    small=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<small)
        {
            small=a[i];
            p=i;
        }
    }
    printf("The smallest element = %d\n",small);
    printf("The position of the element = %d\n",p);
}
