#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the first number:");
    scanf("%d" ,&a);
    printf("enter the second number: ");
    scanf("%d" ,&b);
    printf("enter the third number:");
    scanf("%d" ,&c);
    if( a>b && a>c)
    {
        printf("%d a is greatest \n" ,a);
    }
    else if (b>a && b>c)
    {
        printf("%d b is greatest \n" ,b);
    }
    else if (c>a && c>b)
    {
        printf("%d c is greatest \n" ,c);
    }
    else{
        printf("%d number is equal \n" ,a,b,c);
    }
    return 0;
}