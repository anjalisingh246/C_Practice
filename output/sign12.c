#include <stdio.h>
int main()
{
 int n = 4;
   int m = n;
    for(int i=1 ; i<= n; i++)
    {
        for( int j = 1 ; j<=m ; j++)
        {
        printf(" ");
        }
    for(int k = 1; k <= n; k++)
    {
    if(i==1 || k==1 || i==n || k==n)
    {
    printf("* ");
    }
    else
    {
        printf("  ");
    }
    }
    printf("\n");
    m--;
}
    return 0;

}