#include <stdio.h>
int main()
{
 int  n;
printf("enter the number:");
scanf("%d",&n);
int temp = n;
int sum = 0;
while(n>0)
{
int r = n%10;
sum = sum+r*r*r;
 n=n/10;
}
if (temp == sum)
{
    printf("number is armstrong");
}
else{
    printf("number is not armstrong");
}
return 0;

}