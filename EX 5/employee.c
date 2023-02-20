#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct employee{
    int Empno;
    char name[30];
    int salary;

}a[3];
int main () {
    int i,n,ch;
    for (i=0;i<2;i++){
        printf("entre the empno:\t");
        scanf("%d",&a[i].Empno);
        printf("entre the name:\t");
        scanf("%s",a[i].name);
        printf("entre the salary:\t");
        scanf("%d",&a[i].salary);}
   printf("\t enter the Empno to: operate");
   scanf("%d",&n);
   printf("1.delete the row:\n2.modify the row :");
   scanf("%d",&ch);
   switch(ch){
   case 1:{

       for(i=0;i<2;i++) {


            if (n==a[i].Empno){

                a[i].Empno=0;             printf("\n\t deleted *\n");
               // strcpy(a[i].name,'\0');
                 memset(a[i].name, 0, 20);
             printf("\n\t deleted *\n");
                a[i].salary=0;

            }

       }}
   case 2:{
       for(i=0;i<2;i++) {
            if (n==a[i].Empno)
                {
                    printf("TO MODIFY--->\t entre the empno: ");
        scanf("%d",&a[i].Empno);
        printf("entre the name\t");
        scanf("%s",a[i].name);
        printf("entre the salary\t");
        scanf("%d",&a[i].salary);}



   }}

   for(i=0;i<2;i++){
        printf("EMPNO %d \t name:%s \t salary : %d\t\n ",a[i].Empno,a[i].name,a[i].salary);

   }


    }



}
