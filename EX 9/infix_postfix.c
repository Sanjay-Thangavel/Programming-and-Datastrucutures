#include<stdio.h>
#include<ctype.h>
#include<string.h>
#define MAX 100

char stk[MAX];
int top=-1;


void push(char c){
if(top==MAX-1)printf("STACK OVERFLOW\n");
else {
top++;
stk[top]=c;
}
}

int pop(){
if(top==-1)printf("STACK UNDERFLOW\n");
else return (stk[top--]);
}

int greaterpriority(char c){
if(c=='*' || c=='/' || c=='%')return 1;
if(c=='+' || c=='-')return 0;
}

void infixtopostfix(char *in,char *post){
int i=0,j=0,flag=1;
char temp;
strcpy(post,"");
while(in[i]!='\0' && flag){
if(in[i]=='('){push(in[i]);i++;}
else if(in[i]==')'){
while(top!=-1 && stk[top]!='('){
post[j]=pop();
j++;
}
if(top==-1){printf("INCORRECT EXPRESSION\n");}
temp=pop();
i++;
}
else if(isdigit(in[i]) || isalpha(in[i])){
post[j]=in[i];
i++;j++;
}
else if(in[i]=='+' || in[i]=='-' || in[i]=='*' || in[i]=='/' || in[i]=='%'){
while(top!=-1 && stk[top]!='(' && (greaterpriority(stk[top])>=greaterpriority(in[i]))){
post[j]=pop();
j++;
}
push(in[i]);
i++;
}
else{
printf("INCORRECT EXPRESSION\n");flag=0;
i++;
}
}
while(top!=-1 && stk[top]!='\0'){
post[j]=pop();
j++;
}
post[j]='\0';
}

int main(){

char infix[100],postfix[100];
printf("Enter the infix expression:");
scanf("\n%[^\n]",infix);
strcpy(postfix,"");
infixtopostfix(infix,postfix);
printf("The coressponding postfix expression is %s\n",postfix);
return 0;
}

