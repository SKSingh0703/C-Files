#include <stdio.h>
int stair(int n){
     if(n==1 || n==2) return n;
     if(n==3) return 4;
     return stair(n-1)+stair(n-2)+stair(n-3);
}
int main(){
     int n;
     printf("Enter Number:");
     scanf("%d",&n);
     printf("The number of ways is:%d",stair(n));
     return 0;
}