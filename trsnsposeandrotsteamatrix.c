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
     for(int i=0;i<m;i++){
          for(int j=i;j<n;j++){
               int temp=arr[i][j];
               arr[i][j]=arr[j][i];
               arr[j][i]=temp;
          }
     }
     for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
               printf("%d ",arr[i][j]);
          }
          printf("\n");
     }
     for(int i=0;i<m;i++){
          for(int j=0;j<n/2;j++){
               int temp=arr[i][j];
               arr[i][j]=arr[i][n-1-j];
               arr[i][n-1-j]=temp;
          }
          
     }
     printf("The matrix after 90 degree shift is:\n");
     for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
               printf("%d ",arr[i][j]);
          }
          printf("\n");
     }
     return 0;
    
}

