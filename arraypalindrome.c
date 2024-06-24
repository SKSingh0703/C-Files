#include <stdio.h>
int main(){
     int arr[8]={1,2,3,4,4,3,2,1};
     int brr[8];
     int count=0;
     for(int i=0;i<=7;i++){
          brr[i]=arr[7-i];
     }
     for(int i=0;i<=7;i++){
          if(arr[i]==brr[i]) count++;
     }
     if(count==8) printf("The array is palindrome");
     else printf("The array is not palindrome");
     return 0;
}