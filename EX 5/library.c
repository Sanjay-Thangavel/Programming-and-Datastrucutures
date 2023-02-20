#include<stdio.h>
#include<string.h>

struct library{
    char author[20];
    char publisher[20];
    int rate;
    char branch[10];
}b[5];
void search(char p[20]){
    printf("hi %s\n",p);
    int i;
     for (i=0;i<5;i++){
        if (strcmp(b[i].publisher,p )==0)
       {

        printf("hi %s\n",p);
         printf("the details are \n \t Publisher: %s \nAuthor: %s \n Rate :%d \n brach code :%s ",b[i].publisher,b[i].author,b[i].rate,b[i].branch);}
    }


}

 int main() {
     int i;
     char d[20];
     for (i=0;i<5;i++){
        printf("authour name \n");
        scanf("%s",b[i].author);
        printf("publisher\n");
        scanf("%s",b[i].publisher);
        printf("rate\n");
        scanf("%d",&b[i].rate);
        printf("branch\n");
        scanf("%s",b[i].branch);
     }
    printf("enter the publisher");
    scanf("%s",d);
    search(d);


     }


