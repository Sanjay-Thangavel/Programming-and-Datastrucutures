#include<stdio.h>

#include<stdlib.h>

#include<string.h>

//account number, account holder name, address, account opening date and account type: (Savings/ Current).

struct bst{

int acno ;

float balance;

char name[50];

char address[70];


char date[30];

char actype[790];

struct bst * left;

struct bst * right;

};



struct bst * create(int acno ,float balance, char * name , char *address, char *date, char *actype){

struct bst * temp=(struct bst *)malloc(sizeof(struct bst));

temp->acno=acno;
temp->balance=balance;

strcpy(temp->name,name);

strcpy(temp->address,address);

strcpy(temp->date,date);

strcpy(temp->actype,actype);

temp->left=temp->right=NULL;

return temp;

}



struct bst * insert(struct bst * root,int acno ,float balance, char * name , char *address, char *date, char *actype){

if(root==NULL)root=create(acno,balance,name,address,date,actype);

else if(acno<root->acno)root->left=insert(root->left,acno,balance,name,address,date,actype);

else if(acno>root->acno)root->right=insert(root->right,acno,balance,name,address,date,actype);

return root;

}



void printpreorder(struct bst * root){

if(root==NULL)return;

printf("ACCOUNT NO:%d \n  Name:%s \n BALNCE :%f\n Date:%s\n ACCOUNT TYPE :%s \n\n",root->acno,root->balance,root->name,root->address,root->date,root->actype);

printpreorder(root->left);

printpreorder(root->right);



}

void printless(struct bst * root){

if(root==NULL)return;

if (root->balance<1000){
        printf("ACCOUNT NO:%d  \n Name:%s \n BALNCE :%f \n Date:%s\n ACCOUNT TYPE :%s \n\n",root->acno,root->balance,root->name,root->address,root->date,root->actype);
}

printpreorder(root->left);

printpreorder(root->right);




}




/*
void printpreorder(struct bst * root){

if(root==NULL)return;

printf("RollNo:%d\nName:%s\nGPA:%.3f\n\n",root->rno,root->name,root->gpa);

printpreorder(root->left);

printpreorder(root->right);

}



void printinorder(struct bst * root){

if(root==NULL)return;

printinorder(root->left);

printf("RollNo:%d\nName:%s\nGPA:%.3f\n\n",root->rno,root->name,root->gpa);

printinorder(root->right);

}*/

//left most node

/*void findfirstroll(struct bst * root){

while(root!=NULL){

    if(root->left==NULL){

        printf("RollNo:%d\nName:%s\nGPA:%f\n",root->rno,root->name,root->gpa);

    }

    root=root->left;

}

}

//right most node

void findlastroll(struct bst * root){

while(root!=NULL){

    if(root->right==NULL){

        printf("RollNo:%d\nName:%s\nGPA:%.3f\n",root->rno,root->name,root->gpa);

    }

    root=root->right;

}

}
*/


struct bst * search(struct bst * root,int acno){

if(root==NULL || root->acno==acno)

return root;

else if(root->acno>acno)return search(root->left,acno);

else if(root->acno<acno)return search(root->right,acno);

}



struct bst * inordersuccessor(struct bst * root){

struct bst * temp=root;

while(temp && temp->left!=NULL){

    temp=temp->left;

return temp;

}

}



struct bst * del(struct bst * root,int acno){

if(root==NULL)return root;

if(acno<root->acno)root->left=del(root->left,acno);

else if(acno>root->acno)root->right=del(root->right,acno);

else{

    if(root->left==NULL){

        struct bst * temp=root->right;

        free(root);

        return temp;

    }

    else if(root->right==NULL){

        struct bst * temp=root->left;

        free(root);

        return temp;

    }



    struct bst * temp=inordersuccessor(root->right);

    root->acno=temp->acno;

    root->right=del(root->right,temp->acno);

}

return root;

}

struct bst * deposit(struct bst * root,int acno,int x){

if(root==NULL)return root;

else if(root->acno==acno){
       printf("DEPOSITED___\n");
        root->balance+=x;
        return root;
    }
else if(root->acno>acno)return search(root->left,acno);

else if(root->acno<acno)return search(root->right,acno);

}



int main(){

struct bst * root=NULL;

int choice,flag=1,acno,x;

float balance;

char name[50];
char address[50];
char date[50];
char actype[70];


struct bst * temp;

do{
printf("\n\n\t==========MAIN_MENU=========\n");
printf("Enter your OPTION  :\n  1.CREATE AN ACCOUNT NO \n 2.DELETE AN ACCOUNT\n 3.SEARCH AN ACCOUNT  \n 4.PRINT LIST OF ACCOUNTS\n 5.PRINT ACCOUNTS LESS THAN 1000 \n 6.DEPOSIT \n 7.WITHDRAW \n");

scanf("%d",&choice);

switch(choice){

case 1:
printf("CREATING AN ACCOUNT....\n");
    printf("Enter the ACCOUNT NO :");

    scanf("%d",&acno);



    printf("Enter the name:");

    scanf("%s",name);

    printf("Enter the balance:");

    scanf("%f",&balance);


    printf("Enter the address:");

    scanf("%s",address);

    printf("Enter the ACCOUNT TYPE :");

    scanf("%s",actype);


    root=insert(root,acno,balance,name,address,date,actype);

    break;

case 2:
    printf("DELETING  AN ACCOUNT....\n");

    printf("Enter the ACCOUNT NO :");

    scanf("%d",&acno);

    root=del(root,acno);
    printf("---DELETED------\n");

    break;

case 3:
    printf("SEARCH FOR AN ACCOUNT.....\n");
    printf("Enter the ACCOUNT NO :");

    scanf("%d",&acno);

    temp=search(root,acno);

    if(temp!=NULL) printf("ACCOUNT NO:%d \n BALNCE :%f\n Name:%s \n Date:%s\n ACCOUNT TYPE :%s \n\n",root->acno,root->balance,root->name,root->address,root->date,root->actype);


    break;

case 4:

   /* printf("PREORDER\n");

    printpreorder(root);

    printf("INORDER\n");

    printinorder(root);*/


    printf(" Printing all ....\n In PreORDER\n");

    printpreorder(root);

    break;

case 5 :
    printf("printing balance less than 1000: \n\n ");
    printless(root);
    break;

case 6:
    printf("DEPOSIT.....\n ENTER A ACCOUNT NO.");
    scanf("%d",&acno);
    printf("ENTRE THE AMOUNT TO DEPOSIT :\n");
    scanf("%d",&x);

    root=deposit(root,acno,x);
    break;




case 8:

    flag=0;

    break;

}

}while(flag);

return 0;

}
