#include <stdio.h>
int main()
{   
    int a, b;
    char ch;
    printf("\n ENter 2 values:");
    scanf("%d %d", &a, &b);
    printf("\n+.Add\n-.Minus\n*.Multiply\n /.Division\n");
    printf("\n Enter choice:");
    fflush(stdin);
    scanf("%c", &ch); // 6
    switch (ch)
    {
    case '+':
        printf("\n Addition is %d ", a + b);
        break;
    case '-':
        printf("\n Minus is %d ", a - b);
        break;
    case '*':
        printf("\n Multiplication is %d ", a * b);
        break;
    case '/':
        printf("\n Division is %d ", a / b);
        break;
    default:
        printf("\n Invalid choice...");
        break;
    }
}