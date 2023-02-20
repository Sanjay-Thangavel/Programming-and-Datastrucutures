#include<stdio.h>


void main()
{

float pi=3.14;
float a,circle,sphere,vol;
a=0;circle=0;sphere=0;vol=0;
printf("enter the radius :");
scanf("%f",&a);
circle=pi*a*2;
sphere=pi*a*a;
vol=4/3*pi*a*a*a;
printf("the area of circle is %f\n ,the area of sphere is %f\n,the volume is %f\n of radius %f",circle,sphere,vol,a);

}
