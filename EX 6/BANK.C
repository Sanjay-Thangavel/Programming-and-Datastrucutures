#include<stdio.h>
#include<stdlib.h>
struct bank{
    char name[30];
    int accno;
    int balance;
    char address[50];

}a[5];

void func(struct bank (*a)[5] ){
    int i,ch,no,NO;
    printf("----MENU ---- \n 1.print the details of Account NO \n 2.Withdraw \n.3.Deposit \n 4.ADD New Acc DETAILS\n 5.All details in Account \n  ");
    scanf("%d",&ch);
    switch(ch){
    case 1: {

    printf("enter the account number \n");
    scanf("%d",&no);
    for (i=0;i<2;i++){
            if (no==(*a)[i].accno){


            printf("ans");
        printf("%s \n", (*a)[i].name);
        printf("%d\n", (*a)[i].accno);
        printf("%d\n", (*a)[i].balance);
       printf("%s\n", (*a)[i].address);
            }
    }}
    break;
case 2 :{
    printf("enter the Account number \n");
    scanf("%d",&no);
    printf("enter the withdrawal amount :\n");
    scanf("%d",&NO);
    for (i=0;i<2;i++)
        {
            if (no==(*a)[i].accno){
                    (*a)[i].accno=(*a)[i].accno-NO;printf("\n----UPDATED----");


        }

    }} break;
case 3 :{
    printf("enter the Account number \n");
    scanf("%d",&no);
    printf("enter the DEPOSIT amount :\n");
    scanf("%d",&NO);
    for (i=0;i<2;i++)
        {
            if (no==(*a)[i].accno){
                    (*a)[i].accno=(*a)[i].accno+NO;printf("\n----UPDATED----");


        }

    }} break;

    case 4 :
        {
        printf("enter the\n Name \n, Accno,\n Balance \n,Address: \n");
        scanf("%s",(*a)[2].name);
        scanf("%d",&(*a)[2].accno);
        scanf("%d",&(*a)[2].balance);
        scanf("%s",(*a)[2].address);
         printf("--ADDED----");


    } break;

case 5 :{
    for (i=0;i<2;i++)
    {
        printf("%s \n", (*a)[i].name);
        printf("%d\n", (*a)[i].accno);
        printf("%d\n", (*a)[i].balance);
       printf("%s\n", (*a)[i].address);


}break;
}}
}




 int main (){
     int i,n=2 ;

     for (i=0;i<2;i++){
        printf("enter the\n\t Name, \n \t Accno,\n \tBalance \n,\tAddress: \n");
        scanf("%s",a[i].name);
        scanf("%d",&a[i].accno);
        scanf("%d",&a[i].balance);
        scanf("%s",a[i].address);
     }

       func(&a);
FILE *OF;
OF=fopen("banking.txt","w");
if(OF==NULL){
    printf("ERROR OCCURED IN WRITING DATA \n ");
    return 1;
}
fwrite(a,sizeof(struct bank),5,OF);
printf("data is STOTED \n");
fclose(OF);
return 0;

 }
