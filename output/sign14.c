#include <stdio.h>
int main()
{
    for(int i = 1 ; i<=13 ; i++)
    {
    for(int j = 1 ; j<=13 ; j++)
    {
        if ( i == 13 || j == 13 || i==1 || j==1)
        {
            printf("7");
        }
        else if (i == 12  || j == 12|| j==2|| i==2)
        {
            printf("6");
        }
        else if (i == 11 || j == 11 || i== 3 || i==3)
        {
            printf("5");
        }
        else if (i == 10 || j == 10 ||i==4 || j==4)
    {
            printf("4");
        }
        else if (i == 9 || j ==9 || i==5 ||j==5)
        {
            printf("3");
        }
        else if (i == 8 || j ==8 || i==6 || j==6)
        {
            printf("2");
        }
        else
        {
            printf("1");
        } 
    }
        printf("\n");
    } 
         return 0;
}