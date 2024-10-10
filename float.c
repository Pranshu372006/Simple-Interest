#include<stdio.h>

int main()
{
    float p;
    float r;
    float t;
    float si;
    printf("Enter the value of p =");
    scanf("%f",&p);
    printf("Enter the cvalue of r =");
    scanf("%f",&r);
    printf("Enter the the value of t =");
    scanf("%f",&t);
    si =p*r*t/100.0;
    printf("Simple Interest%f",si);
    return 0;
}