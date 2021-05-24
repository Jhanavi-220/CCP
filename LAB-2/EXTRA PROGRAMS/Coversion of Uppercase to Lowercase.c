#include<stdio.h>
void main()
{
   char ch;
   char ch1;
   printf("Enter the character in Uppercase = ");
   scanf("%c",&ch);
   char chl = (int)ch+32;
   printf("%c in Lowercase = %c",ch,chl);
   return 0;
}
