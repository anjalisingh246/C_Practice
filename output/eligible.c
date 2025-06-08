#include <stdio.h>
int main()
{
int year; 
printf("enter a year: ");
scanf("%d", &year);
if ( year>=18 )
{
    printf("%d eligible for voting .\n", year);
}
else{
    printf("%d not eligible for voting .\n" , year);
}
return 0;
}





