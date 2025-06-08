#include <stdio.h>
int main()
{
int n=5;
int m=n;
for(int i=1 ; i <= n; i++)
{
    for(int j=1 ; j <= m ;j++)
{
    printf(" ");
}
for(int k = 1; k <= 2*i-1;k++)
    {
    printf("*");
    }
    printf("\n");
    m--;
}
    return 0;

}
   