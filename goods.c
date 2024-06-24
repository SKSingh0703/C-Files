#include <stdio.h>
int main(){
     int n;
     printf("Enter the number of rows required:");
     scanf("%d",&n);
     int a=1;
     for(int i=1;i<=2*n-1;i++){
          if(i<=n){
               printf("%d",a);
               a++;
          }
         else{
               printf("%d",a);
               a--;
          }
     }
     printf("\n");
     for(int j=1;j<=n-1;j++){
          for(int k=1;k<=n-1-j;k++){
               printf("%d",a);
               a++;
          }     
          for(int k=1;k=2*(n-1)-1;k++){
               printf(" ");
          }
          for(int l=1;l<=(n-1);l++){
               printf("%d",a);
               a--;
          }
          printf("\n");
     }
     
}
