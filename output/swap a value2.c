#include <stdio.h>
int main()
{
    int a = 45,b = 10;
    a = a+b;
    b = a-b;
    a = a-b;
    printf("a is:%d:",a);
    printf("b is:%d",b);
    return 0;
}