#include<stdio.h>

#include<ctype.h>

#define MAX 100

int stk[MAX];

int top=-1;

void push(int val){

if(top==MAX-1)printf("STACK OVERFLOW\n");

else stk[++top]=val;

}

int pop(){

if(top==-1)printf("STACK UNDERFLOW\n");

else return stk[top--];

}

int evaluate(char op,int op1,int op2){

switch(op){

case '+':

return op1+op2;

case '-':

return op1-op2;

case '*':

return op1*op2;

case '/':

return op1/op2;

case '%':

return op1%op2;

}}



int main(){

char temp;

int x,y,val;

printf("Enter the postfix expression:");

while((temp=getchar())!='\n'){

if(isdigit(temp))push(temp-'0');

else{

y=pop();

x=pop();

val=evaluate(temp,x,y);

push(val);

}

}

val=pop();

printf("The value of the given postfix expression is %d \n",val);

return 0;

}



return pop();

}
