#include <stdio.h>
int main()
{
int a,b;
char c;
printf("enter the choice:");
scanf("%c",&c);
printf("enter the two numbers:\n");
scanf("%d%d",&a,&b);

switch(c)
{
    case '+':
    printf("addition is:%d\n",a+b);
    break;
    case '-':
    printf("substraction is:%d\n",a-b);
    break;
    case '*':
    printf("multification is:%d\n",a*b);
    break;
    case '/':
    printf("division is:%d\n",a/b);
    break;
    default:
    printf("number");
}
return 0;
}
