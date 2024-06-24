#include <stdio.h>
int main(){
     int m,n;
     printf("Wnter the number of rows:\n");
     scanf("%d",&m);
     printf("Wnter the number of column:\n");
     scanf("%d",&n);
     int arr[m][n];
     printf("Enter the Elements of the MATrix:\n");
     for(int i=0;i<m;i++){
           for(int j=0;j<n;j++){
               scanf("%d",&arr[i][j]);
               }
     }
     printf("The matrix in a vertical wave manner is:\n");
     for(int j=0;j<n;j++){
          if(j%2==0){
               for(int i=0;i<m;i++){
                    printf("%d ",arr[i][j]);
               }
          }
          else{
               for(int i=0;i<m;i++){
                    printf("%d ",arr[m-i-1][j]);
               }
          }
          printf("\n");
     }
     return 0;
}
