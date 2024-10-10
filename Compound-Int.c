#include<stdio.h>
#include<math.h>
int main()
{
  int p;
  int r;
  int t;
  int ci;
printf("enter the value of p =");
scanf("%d",p);
printf("enter the value of r =");
scanf("%d",r);
printf("enter the value of t =");
scanf("%d",t);
ci =p*(pow(1+r/100.,t)-1);
printf("Compound Interest =%d",ci);
return 0;
}
