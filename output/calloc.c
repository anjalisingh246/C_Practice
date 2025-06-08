#include<stdio.h>
#include<stdlib.h>
int main()
{
int n,i,*ptr,sum=0;
printf("enter number of elements:");
scanf("%d",&n);
ptr=(int*)calloc(n,sizeof(int));
printf("enter the elements of array:");
for(int i=0; i<n; i++){
scanf("%d",ptr+i);
sum+=*(ptr+i);
}
printf("sum=%d",sum);
free(ptr);
return 0;
}