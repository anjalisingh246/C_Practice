#include <stdio.h>
void add();
void sub();
void mul();
int main()
{
    add();
    sub();
    mul();
return  0;
}
void add()
{
    int a=5,b=10;
    int c=a+b;
    printf("%d addition is:\n",c);
    }
    void sub()
    {
        int a=15,b=30;
        int c=a-b;
        printf("%d substraction is:\n",c);
    }
    void mul()
    {
        int a=80,b=60;
        int c=a*b;
        printf("%d multification is:\n",c);
    }