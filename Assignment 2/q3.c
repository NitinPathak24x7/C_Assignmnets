#include<stdio.h>

int main (){

int p;
float si,r,t;
 printf("Enter the prinicipal amount\n");
 scanf("%d",&p);

 printf("Enter the interest rate\n");
 scanf("%f",&r);

 printf("Enter the time period in years\n");
 scanf("%f",&t);
 si=(p*r*t)/100;
 printf("Calculated Simple interest is %f\n",si);



return 0;
}