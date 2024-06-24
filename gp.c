#include <stdio.h>
int main(){
    int a=3,n;
    printf("Enter the number of terms required for this gp:");
    scanf("%d",&n);
    for(int i=1;i<=n;i=i+1){
        printf("%d\n",a);
        a=a*4;
    }
}