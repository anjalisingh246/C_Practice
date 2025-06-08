#include <stdio.h>
int main()
{
int n =0;
int temp ;
int a=1;
while(a<1000){
int rem=0;
n=a;
while(n>0)
{
 temp=n%10;
 rem+=temp*temp*temp;
 n=n/10;
}
if (rem == a)
{
printf("armstrong number is:%d\n",rem);
}
a++;
}
return 0;
}