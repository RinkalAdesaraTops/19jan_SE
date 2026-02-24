#include <stdio.h>
int main()
{
    int a, b, c, d;
    printf("Enter 4 values:");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if (a > b)
    { // a=25 b=10 c=30 d=40
        if (a > c)
        { // 25>30
            if (a > d)
            {
                printf("\n A is max");
            }
            else
            {
                printf("\n D is max");
            }
        }
        else
        {
            if (c > d)
            {
                printf("\n C is max");
            }
            else
            {
                printf("\n D is max");
            }
        }
    }
    else
    {
        if (b > c)
        {
            if (b > d)
            {
                printf("\n B is max");
            }
            else
            {
                printf("\n D is max");
            }
        }
        else
        {
            if (c > d)
            {
                printf("\n C is max");
            }
            else
            {
                printf("\n D is max");
            }
        }
    }
}