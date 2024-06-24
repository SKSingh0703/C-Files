#include <stdio.h>
#include <limits.h>
int main(){
     int arr[9]={1,7,2,8,33,6,7,8,9};
     int n=9;
     for(int i=0;i<n-1;i++){
          int min=INT_MAX;
          int minindex=-1;
          for(int j=i;j<n;j++){
               if(min>arr[j]){
                    minindex=j;
               }
          }
          int temp=arr[i];
          arr[i]=arr[minindex];
          arr[minindex]=temp;
     }
     printf("The sorted array is :\n");
     for(int i=0;i<n;i++){
          printf("%d ",arr[i]);
     }
     return 0;
}