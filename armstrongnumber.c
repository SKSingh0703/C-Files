#include <stdio.h>
int main(){
    for(int i=1;i<=500;i++){
        int ld,x=i;
        int sum=0;
        while(x!=0){
            ld=x%10;
            sum=sum+(ld*ld*ld);
            x=x/10;
        }
        if(sum==i){
            printf("%d is an armstrong number\n",i);
        }
        
    }
}