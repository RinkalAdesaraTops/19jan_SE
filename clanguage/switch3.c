#include <stdio.h>
int main()
{   
    //a e i o u = vowel 
    //consonant
    char ch;
    printf("\n Enter character:");
    scanf("%c", &ch); 
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("\n VOwel");
        break;
    default:
        printf("\n Consonant");
        break;
    }
}