#include <stdio.h>
int main()
{
    // menu driven
    int a, b, ch;
    printf("\n ENter 2 values:");
    scanf("%d %d", &a, &b);
    printf("\n1.Add\n2.Minus\n3.Multiply\n4.Division\n");
    printf("\n Enter choice:");
    scanf("%d", &ch); // 6
    switch (ch)
    {
    case 1:
        printf("\n Addition is %d ", a + b);
        break;
    case 2:
        printf("\n Minus is %d ", a - b);
        break;
    case 3:
        printf("\n Multiplication is %d ", a * b);
        break;
    case 4:
        printf("\n Division is %d ", a / b);
        break;
    default:
        printf("\n Invalid choice...");
        break;
    }
}