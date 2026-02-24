#include <stdio.h>
int main()
{ //entry controlled loop
    for(int i=1,j=10;i<=5;i++,j+=2)
    {                       // 1<=5
        printf("\n %d", i); // 1
        printf("\n j is %d", j); // 1
    }
    
}