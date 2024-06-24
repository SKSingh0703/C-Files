#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct data{
     int RollNo;
     char name[50];
     char department[50];
     char course[50];
     int yearOfJoining;
}data;

void check(data a,data b){
     strcmp(a.department,b.department);
     if(strcmp==true) printf("They Have the same departments.");
     else printf("They have different Dapartments.");
     return;
}

int main(){
     data one;
     one.RollNo=10973;
     strcpy(one.department,"C");
     strcpy(one.name,"Sachin Kumar");
     
     data two;
     strcpy(two.department,"C");
     
     check(one,two);
     return 0;
}