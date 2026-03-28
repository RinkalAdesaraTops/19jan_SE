#include<stdio.h>
int main(){
      int a;
      FILE *f1;
      f1 = fopen("abc.txt","w");
      printf("Enter a:");
      scanf("%d",&a);
      fprintf(f1,"%d",a);
      fclose(f1);
    
}