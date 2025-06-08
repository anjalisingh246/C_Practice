#include<stdio.h>
int main()
{
    int a = 15,b=35;
    int c = a;
    a=b;
    b=c;
    printf("a is %d:",a);
    printf("b is %d:",b);
    return 0;

}