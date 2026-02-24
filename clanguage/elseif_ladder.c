#include<stdio.h>
int main(){
    int no;
    printf("\n Enter no:");
    scanf("%d",&no); //67 -9 0
    if(no>0){
        printf("\n +ve no");
    } else if(no<0){
        printf("\n -ve no");
    } else {
        printf("\n Zero");
    }
}
