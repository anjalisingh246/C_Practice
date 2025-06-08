#include <stdio.h>
int main()
{
int x = 3;
int z = x;
for
(int i = 1 ; i <= x; i++)
{
    for(int j=1 ; j <= z ;j++)
{
    printf(" ");
}
for(int k = 1; k <=(2*i-1);k++)
    {
    printf("*");
    }
    printf("\n");
    z--;
}
for(int i = 1; i <= x; i++)
{
    for(int j= 1; j <=i;j++)
{
    printf(" ");
}
for(int k = x; k >= 2*i-1;k--)
    {
    printf("* ");
    }
    printf("\n");
  z++;
}
return 0;
}



   