#include <stdio.h>
int main()
{
 float n;
 int a,b;
 printf("enter the number:");
 scanf("%f",&n);
 a = (int)n;
 b = a%10;
 printf("last digit of inteager part is:%d",b);
 return 0;
}