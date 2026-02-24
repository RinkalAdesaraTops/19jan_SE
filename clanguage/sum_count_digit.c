#include <stdio.h>
int main()
{
    int no,count=0,sum=0,r;
    printf("\n Enter no:");
    scanf("%d",&no);
    while(no>0){ //256>0 25>0 2>0 0>0
        r = no%10; //256%10 = 6 25%10=5 2%10=2 
        no = no/10; //256/10=25 25/10=2 2/10=0
        count++; //1 2 3
        sum = sum+r;
    }
    printf("\n Count is %d ",count);
    printf("\n Sum of digits are %d ",sum);
}