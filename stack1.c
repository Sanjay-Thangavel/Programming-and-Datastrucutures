#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#define MAX 100



char stk[MAX];

int top=-1;



void push(char c){

if(top==MAX-1)printf("STACK OVERFLOW\n");

else {top++;stk[top]=c;}

}



char pop(){

if(top==-1)printf("STACK UNDERFLOW\n");

else return(stk[top--]);

}





int main(){

char exp[MAX],temp;

int flag=1;

printf("Enter the expression");

scanf("\n%[^\n]",exp);

printf("%s\n",exp);

for(int i=0;i<strlen(exp)&&flag;i++){

if(exp[i]=='{' || exp[i]=='[' || exp[i]=='(')

push(exp[i]);

if(exp[i]=='}' || exp[i]==']' || exp[i]==')')

if(top==-1)flag=0;

else{

temp=pop();

if(exp[i]=='}' && (temp=='(' || temp=='['))flag=0;

if(exp[i]==']' && (temp=='(' || temp=='{'))flag=0;

if(exp[i]==')' && (temp=='[' || temp=='{'))flag=0;

}

}

if(top>=0)flag=0;

if(flag==1)printf("VALID EXPRESSION\n");

else printf("INVALID EXPRESSION\n");

return 0;

}
