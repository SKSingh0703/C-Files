#include <stdio.h>
int factorial(int x){
     int a=1;
     for(int i=1;i<=x;i++){
          a=a*i;
     }
     return a;
}
     
int combination(int x,int y){
     int a=factorial(x)/(factorial(y)*factorial(x-y));
     return a;
}

int main(){
     int n;
     printf("Enter Number:");
     scanf("%d",&n);
     for(int i=0;i<=n;i++){
          for(int j=0;j<=(n-i);j++){
               printf(" ");
          }
          for(int k=0;k<=i;k++){
               int a=combination(i,k);
               printf("%d ",a);
          }
          printf("\n");
     }
}