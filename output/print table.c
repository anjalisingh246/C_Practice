#include <stdio.h>
int main()
{
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int table;
    for(int i = 1;i<=10;i++)
    {
        table = i*n;
        printf("%d\n",table);
    }
    return 0;

}