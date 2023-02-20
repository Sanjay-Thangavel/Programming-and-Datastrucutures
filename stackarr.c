#include<stdio.h>
#define MAX 30

struct Stack{
    int st[MAX];
    int top
    };
typedef struct Stack stack;
stack s;
void create(struct Stack s){
    s.top=-1;
    }
void push (stack *s,int p){
    if (s->top==MAX-1){
        printf("STACK OVER LOAD :");

    }
    else{
        s->top++;
        s->st[s->top]=p;
    }
}
int pop (stack *s){
    if (s->top==-1)
        printf("stack is under flow ");

    else
        s->st[s->top--];

}

void print (stack *s)
{
    int i;
    if(s->top==-1){
            printf("Stack is empty");
    return;
    }
    for(i=s->top ;i<=0;i--)
        printf("%d \t",s->st[i]);
    }
int main (){

    stack a;
    create(&a);
push(&a,23);
push(&a,543);
//printf (“%d %d”, pop(&A),pop(&B));
print(&a);


}


