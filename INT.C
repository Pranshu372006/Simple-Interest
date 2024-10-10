#include<stdio.h>

int main()
{
    int p;
    int r;
    int t;
    int si;
    printf("Enter the value of p =");
    scanf("%d",&p);
    printf("Enter the cvalue of r =");
    scanf("%d",&r);
    printf("Enter the the value of t =");
    scanf("%d",&t);
    si =p*r*t/100.0;
    printf("Simple Interest%d",si);
    return 0;

}