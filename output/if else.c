#include <stdio.h>
int main()
{
    char ch;
    printf("enter the character: ");
    scanf("%c" ,&ch);
    if ( ch >= 'a' && ch <= 'z'|| ch >= 'A' && ch <= 'Z' )
    {
        printf(" character is not digit" );
    }
    else{ 
        printf(" chharacter is digit ");
    }
    return 0;
     
    }