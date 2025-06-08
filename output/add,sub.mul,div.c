#include <stdio.h>
int main()
{
    int a,b;
    int c;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    printf("enter the choice:");
    scanf("%d",&c);
    switch (c)
 {
    case 1:
    printf("addition %d\n",a+b);
    break;
case 2:
printf("substraction %d\n ",a-b);
break;
case 3:
printf("multification %d\n ",a*b);
break;
case 4:
printf("division %d\n",a/b);
break;
default:
printf("enter the right value");
break;
}
 return 0;
}