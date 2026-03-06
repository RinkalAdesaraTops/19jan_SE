#include <stdio.h>
int main()
{
    //134 = 431 palindrom no 121 = 121
    int no,sum=0,r,f,rev=0;
    printf("\n Enter no:");
    scanf("%d",&no);
    f=no;
    while(no>0){
        r=no%10; //134%10=4 3 1 //4*10 40+3=43 43*10=430+1=431
        no/=10;
        rev = (rev*10)+r;
    }
    printf("\n Reverse no is : %d",rev);
    if(f==rev){
        printf("It is palindrom no");
    } else {
        printf("It is not palindrom no");
    }
}

// megic no=1729
//sum of digits = 1+7+2+9 = 19
//reverse = 91
//multiply = 19*91=1729