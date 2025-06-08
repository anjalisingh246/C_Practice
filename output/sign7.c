#include <stdio.h>
int main()
{
    int n = 5;
    int m = n;
    for(int i=1 ; i<=5; i++)
    {
        for( int j = 0 ; j<=m ; j++)
        {
        printf("  ");
        }
    for(int k= 1 ; k <=i;k++)
     { 
        if(k==1 || k==i || i==5)
        {
    printf("* ");
        }
        else
        {
            printf("  ");
        }
    }
    m--;
    printf("\n");
}
    return 0;
}
