#include <stdio.h>
int main(){
     int arr[5];
     for(int i=0;i<=4;i++){
          printf("Enter marks for student number %d:",i);
          scanf("%d",&arr[i]);
     }
     for(int i=0;i<=4;i++){
          if(arr[i]<=35) printf("The number of student is %d and he has scored %d marks.\n",i,arr[i]);
     }
     return 0;
}