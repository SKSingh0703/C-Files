#include <stdio.h>
#include <limits.h>
int main(){
     int m,n;
     printf("Enter number of rows:\n");
     scanf("%d",&m);
     printf("Enter number of column:\n");
     scanf("%d",&n);
     int arr[m][n];
     printf("Enter the Elements:\n");
     for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
               scanf("%d ",&arr[i][j]);
          }
          printf("\n");
     }
     int max=INT_MIN;
     for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
               if(arr[i][j>max]) max=arr[i][j];
          }
     }
     printf("Max elemnt of the matrix is:%d",max);
}
