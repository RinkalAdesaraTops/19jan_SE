#include <stdio.h>
int main()
{
    int m,n,arr[50][50],i,j,sum=0,anti_sum=0;
    printf("\n Enter row & column size:");
    scanf("%d %d",&m,&n);
    printf("\n Enter elements: \n ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\n Matrix: \n ");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
            if(i==j || i+j == 2){
                sum += arr[i][j];
                // sum = sum+arr[i][j];
            }
            // if(i+j == 2){
            //     anti_sum += arr[i][j];
            //     // anti_sum = anti_sum+arr[i][j];
            // }
        }
        printf("\n");
    }
    printf("\n Sum of diagonal is %d ",sum);
    // printf("\n Sum of Anti diagonal is %d ",anti_sum);
}