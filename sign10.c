#include <stdio.h>
int main()
{
    for(int i=1 ; i<= 4; i++)
    {
        for( int j = 1 ; j<=i ; j++)
        {
        printf("*");
    }
    printf("\n");
    }

    for(int k=1 ; k<= 5; k++)
    {
        for( int l = 5; l >= k ; l--)
        {
        printf("*");
    }
    printf("\n");
    }
    return 0;

}