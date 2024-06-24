#include <stdio.h>
#include <string.h>
int main(){
     struct Person{
          char name[100];
          float salary;
          int age;
          }a,b;
          strcpy(a.name,"Sachin");
          a.salary=100000;
          a.age=24;
          strcpy(b.name,"Kabir");
          b.salary=90000;
          b.age=36;
          printf("The Name of the 1st is %s and the age of the 2nd is %d:",a.name,b.age);
}