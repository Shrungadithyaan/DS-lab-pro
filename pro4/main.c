#include <stdio.h>
#include <stdlib.h>

char infix[30],postfix[30],stack[30];
int top = -1;

void push(char item){
    stack[++top] = item;
}

int pop(){
    return stack[top--];
}

int priority(char symb){

int p;

switch(symb){

case'+':
case '-':p = 1;
        break;

case '*':
case '/':
case '%':p=2;
        break;

case '^':p=3;
        break;

case '(':
case ')':p = 0;
        break;

case '#':p = -1;
        break;

}

return p;
}



void infix_to_postfix(){
int i=0;j=0;
char symb, temp;
push(#);
for(i=0;infix[i]!='\0';i++){
    symb = infix[i];

    switch(symb){

    case'(':push(symb);
            break;

    case ')':temp=pop();
            while(temp!='('){
                    postfix[j++] = temp;
                    temp = pop();
                  }
                break;

    case '+':
    case '-':
    case '*':
    case '/':
    case '%':
    case '^':while(priority(stack[top])>=priority(symb)){
        temp = pop();
        postfix[j++] = temp;
    }
    push(symb);
    default:postfix[j++] = symb;
    }
}

while (top>0){
    temp = pop();
    postfix[j++] = temp ;
}
postfix[j] = '\0';

}

void main(){
    printf("Enter the valid infix expression \n");
    sacnf("%s",infix);
    infix_to_postfix();
    printf("Infix Expression:%s",infix);
    printf("\n Postfix Expression:%s\n",postfix);

}
