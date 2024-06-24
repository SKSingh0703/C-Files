#include <stdio.h>
int main(){
     int n;
     printf("Enter the order of matrix:\n");
     scanf("%d",&n);
     int arr[n][n]; //to enter the elements in spiral order//
     int maxr=n-1,maxc=n-1,minr=0,minc=0,count=0,tne=n*n;
     printf("ENTER the elements of matrix:");
     while(count>tne){
          for(int j=minc;j<=maxc;j++){
               scanf("%d",&arr[minr][j]);
               count++;
          }
          minr++;
          if(count>tne) break;
          for(int i=minr;i<=maxr;i++){
               scanf("%d",&arr[i][maxc]);
               count++;
          }
          maxc--;
          if(count>tne) break;
          for(int j=maxc;j>=minc;j--){
               scanf("%d",&arr[maxr][j]);
               count++;
          }
          maxr--;
          if(count>tne) break;
          for(int i=maxr;i>=minr;i--){
               scanf("%d",&arr[i][minr]);
               count++;
          }
          maxr--;
          
     }
     for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
               printf("%d",arr[i][j]);
          }
          printf("\n");
     }
}
