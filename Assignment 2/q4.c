#include<stdio.h>

int main ()
{
float l,b,h,v;

printf("Enter the length of the cuboid");
scanf("%f",&l);
printf("Enter the breadth of the cuboid");
scanf("%f",&b);
printf("Enter the height of the cuboid");
scanf("%f",&h);

v=l*b*h;

printf("The volume of cuboid is %f",v);


return 0;
}