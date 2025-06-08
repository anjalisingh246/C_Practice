#include <stdio.h>
int main()
{
    int arr[2][3]={{2,3,5},{6,7,9}};
    int arr1[2][3]={{5,6,9},{2,3,4}};
    for(int i=0; i<2; i++){
    for(int j=0; j<3;j++ ) {
        printf("%d ",arr[i][j]);
    }
        printf("\n");
    } 
    for(int k=0; k<2; k++){
     for(int l=0; l<3;l++){
        printf("%d ",arr1[k][l]);
     }
     printf("\n");
    }
    return 0;
}