#include<stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node *next;
};
struct node *head=NULL;
void insert_at_begin(){
    struct node *t=(struct node *)malloc(sizeof(struct node));
    printf("entre the number to be inserted :");
    scanf("%d",&t->data);
    if (head==NULL){
        head=t;
        t->next=NULL;
        return;
    }
    t->next=head;
    head=t;

}
void display(){
    struct node* temp=head;
    if (head==NULL){
        printf("Empty link list \n ");
        return ;
    }

    while(temp!=NULL){
            printf("%d -> ",temp->data);
            temp=temp->next;

    }
}
void insert_at_end(){
     struct node *temp=head;
    struct node* t=(struct node*)malloc(sizeof(struct node*));
    printf("entre the element to be inserted at LAst :");
    scanf("%d",&t->data);
    t->next=NULL;

     while(temp->next!=NULL){
        temp=temp->next;

     }
     temp->next=t;
    if(head==NULL){
        head=t;
        return ;
    }
}
void insert_at_middle(){

struct node *temp=head;
int x;
struct node *t=(struct node*)malloc(sizeof(struct node));
printf("entre the element after which is to be inserted :");
scanf("%d",&x);
printf("entre the element for inserting : ");
scanf("%d",&t->data);
while((temp->data!=x) && (temp->next!=NULL)){
      temp=temp->next;

}

if (temp->data!=x){
    printf("no element found as %d",x);
    return ;}
t->next=temp->next;
temp->next=t;
}

void delete_at_begin(){
    struct node *temp=head;

    if (head==NULL){
        printf("empty link list");
        return;
    }
    head=head->next;
    free(temp);
}
void delete_at_middle(){
struct node *prev=head;
int x;
struct node *cur=head;
printf("Entre the element to delelte:");
scanf("%d",&x);
if (head->data==x){
    delete_at_begin();
    return;
}
while((cur->data!=x)&&(cur->next!=NULL))
    {
        cur=prev;
        cur=cur->next;
      }
if (prev->data!=x){
        printf("data not found ");
        return ;

}
      prev->next=cur->next;
      free(cur);


 }

void delete_at_end(){
    struct node *prev=head;
    struct node *cur=head;
if (head==NULL){
    printf("empty linked list ");
    return ;
}

if (head->next==NULL){
    free(head);
    head=NULL;
    return;
}
while(cur->next!=NULL){
    prev=cur;
    cur=cur->next;
}

prev->next=NULL;
free(cur);
}
void split(){



}



int main (){
int ch;

do{
    printf("Entre your choice :\n ");
printf("1.insert at begin ()\n 2.insert at middle \n 3.insert at end \n 4.delete in begin\n 5.delete in middle\n 6.delete in last \n 7.exit \n8.display \n");

scanf("%d",&ch);

    switch(ch){
case 1:
    insert_at_begin();
    break;
case 2:
    insert_at_middle();
    break;
case 3:
    insert_at_end();
    break;
case 4:
   delete_at_begin();
    break;
case 5:
    delete_at_middle();
    break;
case 6:
    delete_at_end();
    break;
case 7:
    exit(1);
case 8:
    display();
    break;
case 9 :
    split();
default:
    printf("entre a valid choice :");


    }
}while(ch!=7);

}
