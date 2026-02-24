#include<stdio.h>
int main(){
    int a=10,b;
    printf("\n A is %d",a);
    b=a++; //postfix 11
    printf("\n A is %d",a); //11
    printf("\n B is %d",b); //10
    b=++a; //prefix 12
    printf("\n A is %d",a);
    printf("\n B is %d",b); //12
}