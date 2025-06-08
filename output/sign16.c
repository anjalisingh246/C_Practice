#include <stdio.h>
int main()
{
int x=5;
int z=x;
for(int i=1 ; i <= x; i++)
{
    for(int j=1 ; j <= i;j++)
{
    printf(" ");
}
for(int k = 7; k >= 2*i-1;k--)
    {
    printf("*");
    }
    printf("\n");
    z++;
}
return 0;
}