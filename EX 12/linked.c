#include<stdio.h>
struct node {
     int data;
     struct node *next;
};

struct node *head=NULL;

insert_at_begin(){
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    printf("entre the element to insert :");
    scanf("%d",&temp->data);
    temp->next=head;
    head=temp;
}
insert_at_end()
{
    struct node *t=head;
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    printf("entre the element to insert :");
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(t==NULL){
        t=temp;
        return ;

    }
    while(t->next!=NULL)
        {
            t=t->next;
        }
    t->next=temp;

}
insert_at_middle()
{
    int x ;
    struct *t=head;
    struct node *temp=(struct node*)mallaoc(sizeof(struct node*));

    printf("entre the element to after which insert takes place :");
    scanf("%d",&x);
    printf("entre the element to insert : ");
    scanf("%d",&temp->data);

    while((t->data!=x) &&(t->next!=NULL)){
        t=t->next;
    }
    temp->next=t->next;
    t->next=temp;
    if (t->data!=x){
        printf("element not found ..");
        return ;
    }



}
display (){
    struct node *t=head;
   // struct node* temp=(struct node*)malloc(sizeof(struct node*));
    while(t!=NULL){
        printf("%d",t->data);
        t=t->next;

    }


}
delete_at_begin(){
    struct node *t=head;
    if(t==NULL){
        printf("list is empty :  .." );
        return ;
    }
    free(head);
}

delete_at_middle(){
    struct node *prev=head;
    struct node *cur=head;
    while((cur->data!=x)&&(cur->next!=NULL)){
            prev=cur;
            cur=cur->next;

    }
cur->next=prev;
prev->next=cur;
free(cur);


}
delete_at_end(){

    while(cur->next!=NULL)
        {
        cur=cur->next;
        }

}
