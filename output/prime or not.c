#include <stdio.h>
int main()
{
int n;
printf("enter a number");
scanf("%d",&n);
   int i=1;;
   int c=0;
   while(i<=n)
   {
   if(n%i==0)
   {
      c++;
   }
   i++;
   }
      if(c==2)
      {
         printf("number is prime");
      }
    else 
    {
      printf("number is not prime");
    }
   return 0; 
}