#include <stdio.h>
int main(){
    int n,a=1,b=1,sum=1;
    printf("Enter number:");
    scanf("%d",&n);
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        printf("The %d fibonacci number is :%d\n",(i+2),sum);
        a=b;
        b=sum;
    }
}
