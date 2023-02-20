#include<stdio.h>
struct student {
    int rollno;
    char name[20];
    char branch[10];
    int avg;

}s1[4] ;
int main (){
    int i=0;
    int cp=0,cf=0;
    for (i=0;i<4;i++){
        printf("enter rollno:\n");
        scanf("%d",&s1[i].rollno);
        printf("enter name \n");
        scanf("%s",s1[i].name);
        printf("enter branch \n");
        scanf("%s",s1[i].branch);
        printf("enter avg mark\n");
        scanf("%d",&s1[i].avg);
    }printf("the passs list :");
    for (i=0;i<4;i++){
    if (s1[i].avg>=50) {
        printf("%s \t\n",s1[i].name);
        cp++;

    }}printf("the count is %d \n\n The fail list is :\t",cp);
    for (i=0;i<4;i++){
        if (s1[i].avg<50) {
            printf("%s\n\t",s1[i].name);
            cf++;
        }

    }printf("the count is %d",cf);




}
