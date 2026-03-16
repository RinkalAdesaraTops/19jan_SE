#include <stdio.h>
int main()
{
    int m,n,arr[50][50],i,j;
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
        }
        printf("\n");
    }
}