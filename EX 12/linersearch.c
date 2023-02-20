#include<stdio.h>
#include<string.h>
struct employee{
int id;
char name[20];
char des[30];
int salary;
}a[2];
int i;
int main (){
    int i;
    for(i=0;i<2;i++){
        printf("entre id :");
        scanf("%d",&a[i].id);
       printf("entre  name:");
       scanf("%s",a[i].name);
       printf("entre design :");
       scanf("%s",a[i].des);
    printf("entre  salary:");
    scanf("%d",&a[i].salary);
    }
    printf("all elelments :\n\t ");
    print();
    printf("entre eleement to search by ID :\n");
    searchid();
    printf("entre eleement to search by NAME :\n");
    searchname();

    }
void print(){

for(i=0;i<2;i++){
        printf("id : %d \n",a[i].id);

       printf("name: %s\n",a[i].name);
       printf("entre design : %s\n",a[i].des);

    printf("salary: %d\n",a[i].salary);

    }

}

printone(int i){
    printf("id : %d \n",a[i].id);

       printf("name: %s\n",a[i].name);
       printf("entre design : %s\n",a[i].des);

    printf("salary: %d\n",a[i].salary);

}

void  searchid(){
    int ID;
    printf("entre the id :");
    scanf("%d",&ID);
   for(i=0;i<2;i++){
        if(a[i].id==ID){
            printone(i);
        }

    }}
void searchname(){
    char NAME[20];
    printf("entre the NAME  :");
    scanf("%s",NAME);
   for(i=0;i<2;i++){
        if(strcmp(a[i].name,NAME)==0){
                printf("hi \n");
            printone(i);
            break;
        }



}}





//}






