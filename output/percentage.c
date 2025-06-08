#include <stdio.h>
int main()
{
    float per;
    printf("enter the percentage: ");
    scanf("%f" ,&per);
    if (per>=60)
    {
        printf("first division ");
    }
    else if (per>=50)
    {
        printf(" second division ");
    }
    else if (per>=40)
    {
        printf(" third division ");
    }
    else{
        printf("fail");
    }

}