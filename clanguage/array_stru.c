#include<stdio.h>
struct user
{
    int user_id;
    char user_name[100];
}u1[50];

int main(){
    int i,n;
    printf("\n Enter no of users:");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\n Enter userid:");
        scanf("%d",&u1[i].user_id);
        printf("\n Enter username:");
        scanf("%s",&u1[i].user_name);
    }
    printf("\n Userid \t Username");
    for(i=0;i<n;i++){
        printf("\n %d \t %s",u1[i].user_id,u1[i].user_name);
    }
}