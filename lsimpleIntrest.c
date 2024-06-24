#include<stdio.h>
int main()
{

    float p,r,t,si;
    printf("Enter Principal:");
    sacnf("%f",&p);
    printf("Enter rate:");
    sacnf("%f",&r);
    printf("Enter time:");
    sacnf("%f",&t);
    si=(p*r*t)/100;
    printf("The simple intrest is :%f",si);
    return 0;
}
