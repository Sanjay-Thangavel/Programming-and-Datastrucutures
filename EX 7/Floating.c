#include<stdio.h>

int main () {

int i,n;
float a[300];
printf("enter the numbers of items");
scanf("%d",&n);
printf("enter the elements in floating \n");
for (i=0;i<n;i++){

    scanf("%f",&a[i]);
}
 printf("elements are :\n ");
for (i=0;i<n;i++){

   printf("%f \n ",a[i]);

}


}
