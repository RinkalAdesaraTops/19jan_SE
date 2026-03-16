#include <stdio.h>
int main()
{
    int a,*p,**p1,***p2,****p3;
    a=10;
    p=&a;
    p1=&p;
    p2=&p1;
    p3=&p2;
    printf("\n A is %d",a);
    printf("\n p is %d",*p);
    printf("\n p1 is %d",**p1);
    printf("\n p2 is %d",***p2);
    printf("\n p3 is %d",****p3);
    ***p2 = 200;
    printf("\n********************\n");
    printf("\n A is %d",a);
    printf("\n p is %d",*p);
    printf("\n p1 is %d",**p1);
    printf("\n p2 is %d",***p2);
    printf("\n p3 is %d",****p3);
}