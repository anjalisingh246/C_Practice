#include <stdio.h>
int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
   int temp = n;
   int res= 0;
    while (n>0)
    {
        int r = n % 10;
        res = res * 10 + r;
       n = n/10;
    }
    if (temp == res)
    {
    printf("number is parildrome");
}
else
{
    printf("number is not parildrome");
}
    return 0;
}