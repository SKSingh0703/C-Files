#include <stdio.h>
#include <limits.h>
int main(){
     int arr[9]={1,2,3,4,0,2,0,3,8};
     int n=9;
     for(int i=0;i<n;i++){
          for(int j=i;j<n;j++){
               if(arr[j]==0 && j>=0){
                    int temp=arr[j+1];
                    arr[j+1]=arr[j];
                    arr[j]=temp;
               }
          }
     }
     for(int i=0;i<n;i++){
          printf("%d ",arr[i]);
     }
     return 0;
}