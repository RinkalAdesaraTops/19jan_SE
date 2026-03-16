#include <stdio.h>
int main()
{
    //3*3 = 9 
    // int arr[3][3] = {12,23,33,44,50,66,77,88,90};
    int arr[3][3] = {{12,23,33},{44,50,66},{77,88,90}};
    // printf("%d \n",arr[0][0]);
    // printf("%d \n",arr[1][0]);
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}