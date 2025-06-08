#include <stdio.h>
int main()
{
int year;
char branch;
printf("enter the branch:");
scanf("%c",&branch);
printf("enter the year:");
scanf("%d",&year);
switch(year)
{
case 1:
switch(branch)
{
case 'c':
printf("c & c++" );
          break;
    case 'm':
    printf("fluid mechanics");
    break;
    case 'e':
    printf("auto cad");
    break;
}
    break;
case 2:
switch (branch)
{
case 'c':
printf("java");
break;
case 'm':
printf("m2");
break;
case 'e':
printf("thermodynamics");
}
break;
default:
printf("enter a right year");
}
    return 0;
}