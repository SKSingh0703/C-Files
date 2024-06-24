#include <stdio.h>
int main(){
    int n,a;
    printf("Enter Number:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        a=i;
        for(int j=1;j<=(2*a-1);j=j+2){
            printf("%d",j);
        }
        printf("\n");
    }
}
