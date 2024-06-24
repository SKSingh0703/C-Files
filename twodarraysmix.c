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
     int max=INT_MIN,a,b;
     for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
               if(arr[i][j]>max){
                    max=arr[i][j];
                    a=i;
                    b=j;
          }
     }
     }
     printf("Max elemnt of the matrix is:%d\n",max);
     printf("The Address of the max elemnt is(%d,%d):\n",a,b);
     for(int i=0;i<m;i++){
          for(int j=0;j<n;j++){
               printf("%d ",arr[i][j]);
          }
          printf("\n");
     }
     int sum=INT_MIN,rowsum=0,x,y;
     for(int i=0;i<m;i++){
          int rowsum=0;
          for(int j=0;j<n;j++){
               rowsum=rowsum+arr[i][j];
               if(rowsum>sum){
                    sum=rowsum;
                    x=i,y=j;
               }
          }
     }
     printf("The Row with max sum is %d with max sum equal to %d.",x,sum);
     return 0;    
}
