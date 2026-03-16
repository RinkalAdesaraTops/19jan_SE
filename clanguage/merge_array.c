#include <stdio.h>
int main()
{
    // 34,23,12,44,10,8 
    int m,n,total;
    printf("\n Enter array1 size:");
    scanf("%d",&m); 
    printf("\n Enter array2 size:");
    scanf("%d",&n); 
    int arr1[m],arr2[n];
    total = m+n;
    int merge_arr[total];
    printf("\n Enter array1 : ");
    for(int i=0;i<m;i++){
        scanf("%d",&arr1[i]);
    }
    printf("\n Enter array2 : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr2[i]);
    }
    for(int i=0;i<m;i++){
        merge_arr[i] = arr1[i];
    }
    for(int i=m,j=0;i<total;i++,j++){
        merge_arr[i] = arr2[j];
    }
    printf("\n Merge Array: ");
    for(int i=0;i<total;i++){
        printf("%d ",merge_arr[i]);
    }
}