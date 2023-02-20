#include<stdio.h>
#include<string.h>
union clas {

    int ro;
char name[30];
    float avgmark;

}c;
int main () {
printf("the size is :%d \n",sizeof(c));//size of union
 c.ro=12;
strcpy(c.name,"murugan");
c.avgmark=78.9;
 printf("Student details are:\n");//printing stud data
         printf("\nRoll no: %d",c.ro);
         printf("\nName: %s",c.name);
         printf("\nMarks: %d \t\n ",c.avgmark);
         printf("Adress of the variables are same  :):\n");//printing stud data
         printf("\nRoll no: %p",&c.ro);
         printf("\nName: %p",&c.name);
         printf("\nMarks: %p",&c.avgmark);

       }

