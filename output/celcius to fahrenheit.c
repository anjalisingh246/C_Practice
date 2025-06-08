#include <stdio.h>
int main()
{
    float c,f;
    printf("enter the celcius temperature:");
    scanf("%f",&c);
    f = (c*9/5+32);
    printf("fahrenheit temperature is:%f\n",f);
    return 0;

}