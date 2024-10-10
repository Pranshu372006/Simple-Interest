#include <stdio.h>
#include <conio.h>
int main()
{
float p;
float r;
float t;
float si;
float ci;
clrscr();
printf("enter the value of p =");
scanf("\n%f",&p);
printf("enter the value of r =");
scanf("\n%f",&r);
printf("enter the value of t =");
scanf("\n%f",&t);
si= p*r*t/100.0;
printf("simple interest = %f",si);
ci =p*(pow(1+r/100,t)-1);
printf("\ncompount interest = %f",ci);
getch();
return 0;
}



