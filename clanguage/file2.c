#include <stdio.h>
int main()
{
    int a;
    FILE *f1;
    f1 = fopen("abc.txt", "r");
    fscanf(f1, "%d", &a);
    printf("\n Data read from file value a is %d",a);
    fclose(f1);
}