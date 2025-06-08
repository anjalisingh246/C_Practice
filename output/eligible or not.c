#include <stdio.h>
int main()
{
    float h,w;
    printf("enter the height:");
    scanf("%f" ,&h);
    printf("enter the weight:");
    scanf("%f" ,&w);
    if ( h >= 6.1 && w >= 62.5)
    {
        printf(" eligible for army");
    }
    else{
        printf(" not eligible for army ");
    }
    return 0;
}