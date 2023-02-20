#include <stdio.h>
#include<stdlib.h>
#include<string.h>
int i,j;int arr[5];
struct student{
    int rollno;
    char name[20];
    int mark1;
    int mark2;

}s[3];
//3
void accept(){
    for(i=0;i<3;i++){
        printf("entre roll no :");
        scanf("%d",&s[i].rollno);
         printf("entre name :");
        scanf("%s",s[i].name);
         printf("entre mark1 :");
        scanf("%d",&s[i].mark1);
         printf("entre mark2 :");
        scanf("%d",&s[i].mark2);
    }

}
void display(){
    for (i=0;i<3;i++){
        printf("rollno : %d \n",s[i].rollno);
        printf("name : %s\n",s[i].name);
         printf("mark1  : %d\n",s[i].mark1);
          printf("mark 2 : %d\n",s[i].mark2);
    }
}
void update(){
    printf("Updating ...");
    int r;
    printf("entre the rollno :");
    scanf("%d",&r);
    for (i=0;i<3;i++){
        if (s[i].rollno==r){
            printf("entre name :");
        scanf("%s",s[i].name);
         printf("entre mark1 :");
        scanf("%d",&s[i].mark1);
         printf("entre mark2 :");
        scanf("%d",&s[i].mark2);

        }
    }
}

void avg(){

    for(i=0;i<3;i++){
        arr[i]=(s[i].mark1+s[i].mark2)/2;

    }
    for(i=0;i<3;i++){
        printf("%d : %d \n ",i+1 ,arr[i]);

    }



}
void sort(){
    struct student temp;
    for(i=0;i<3;i++){
            for(j=0;j<3-i;j++){

            if (strcmp(s[i].name,s[i+1].name)>0){
            temp=s[j+1];
            s[j+1]=s[j];
            s[j]=temp;


            }
            }

    }
    avg();
    display();
}

int main()

{
     int ch;
    do {

        printf("\t Entre your choice :\n  1.accept()\n 2.display() \n 3.update()\n 4.display() \n 5.avg() \n 6.exit \n 7.sort() \n ");
        scanf("%d",&ch);
        switch(ch){
            case 1 :
               accept();
            break;
            case 2:
              display();
              break;
            case 3 :
              update();
               break;
             case 4 :
              display();
              break;
             case 5 :
             avg();
             break;
             case 6 :
             exit(0);

             break;
             case 7:
             sort();
             break;
             default :
             printf("entre a valid choice 1-6 ");
        }


    }while(ch!=6);
    //printf("Hello World");

}
