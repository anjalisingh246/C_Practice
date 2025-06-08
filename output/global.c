
#include <stdio.h>
void cube();
void square();
void quadratic();
int a =16;
int main()
{
    cube();
    square();
    return 0;
}
void cube()
{
   int d=a*a*a;
   printf("cube is:%d\n",d);
}
void square()
{
    int d=a*a;
    printf(" square is:%d\n",d);
}

