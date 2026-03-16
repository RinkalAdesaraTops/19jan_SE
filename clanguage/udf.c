#include <stdio.h>
// 4 types of UDF
// 1)TNRN - Take nothing Return nothing
void add() //declaration 
{
    int a=15,b=20;
    printf("\n Addition is %d",a+b);
}
//2)TSRN - Take something return nothing
void area(float r){
    const float pi=3.14;
    printf("\n Area of circle is %f ",pi*r*r);
}
//3)TNRS - Take nothing return something
int multiply(){
    int a=25,b=10;
    return a*b;
}
//4)TSRS
int cube(int a,int b){
    return a*b*a;
}
int main()
{
    int ans;
    printf("Main function called...");
    add();
    area(20);
    // ans = multiply();
    // printf("\n Multiplication is %d ",ans);
    printf("\n Multiplication is %d ",multiply());
    printf("\n Cube is %d ",cube(4,6));  
}
// void add(){ //definition 

// }