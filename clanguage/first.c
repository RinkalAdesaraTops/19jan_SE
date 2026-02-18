#include<stdio.h>
// datatypes = primitive, non-primitive
//int= integer-4 float-4 short=2byte long-16 double-8 char-1
//format specifier = int = %i,%d
// float %f char= %c
//array structure union pointer enum
int main(){
    // static
    int a=10,b=20,c;
    float pi=3.14,r=20;

    // int a=10;
    // int b;
    // b=20;
    c=a+b;
    printf("Hii Hello...");
    printf("\n C language started...");
    printf("\n A is %d",a);
    printf("\n B is %d",b);
    printf("\n Addition is %d",c);
    printf("\n Area of circle is %.2f",pi*r*r);
}
