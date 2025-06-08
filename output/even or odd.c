#include <stdio.h>
int main()
{
    int a;
    printf("enter the number: ");
    scanf("%d", &a);
    if (a%2 == 1)
    {
        printf("%d number is odd\n ",a);
    }
    else
    {
        printf("%d number is even\n",a);
    }
     return 0;
}