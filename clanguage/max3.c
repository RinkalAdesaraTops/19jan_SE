#include <stdio.h>
int main()
{
    // max=3 elseif ladder
    //max=4 nested if
    int a=56,b=7,c=100;
    if(a>b){ //56>7
        if(a>c){ //56>100
            printf("A is max");
        } else {
            printf("C is max");
        }
    } else {
        if(b>c){
            printf("B is max");          
        } else {
            printf("C is max");
        }
    }
}