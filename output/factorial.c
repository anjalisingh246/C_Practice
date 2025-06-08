#include <stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int i = 0;
    int fact = 0;
    while(i<=n)
    {
        fact = fact+i;
        i++;
    }
    printf("i is:%d\n",fact);
    return 0;
}