#include <stdio.h>
int main()
{
    int n;
    printf("\n Enter array size:");
    scanf("%d",&n); 
    int arr[n],rev[n];
    printf("\n Enter %d elements : ",n);
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("\n You have entered %d elements\n",n);
    for(int i=n-1,j=0;i>=0;i--,j++){
        rev[j]=arr[i];
        printf("%d \n",arr[j]);
    }
    printf("\n Reverse Array \n");
    for(int i=0;i<n;i++){
        printf("%d \n",rev[i]);
    }
}