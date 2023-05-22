#include <stdio.h>
#include <stdlib.h>
#define MAX 4

int n, top = -1, status=0, counter = 0, stack[MAX],item;

void push(int stack[],int item){

if(top == MAX-1){
    printf("The stack is overflow");
}else{
stack[++top] = item;
status++;

}
}

int pop(int stack[]){
int ret;
if(top == -1){
    printf("The stack is underflow");
}else{

ret = stack[top--];
status--;
printf("The pop element is %d ",ret);
}
return ret;
}

int display(int stack[]){
if (top==-1){
    printf("The stack is empty");
}else{
    printf("The element of stack are");
for(int i=top; i>=0;i--){

    printf("|%d|\n",stack[i]);
}
}

}

void palindrome(int stack[]){
int temp,i;
temp = status;
for(i=0;i<temp;i++){
    if(stack[i] == pop(stack))
        counter++;

}
if( temp == counter){
    printf("given stack is a palindrome");
}
else{
    printf("given stack is not a palindrome");
}
}

void main(){
int ch;
do{
    printf("*******main menu*********");
    printf("1.push \n 2.pop\n 3.palindrome\n 4.dis[lay \n5.Exit \n");
    printf("Enter the choice");
    scanf("%d",&ch);

    switch(ch){
        case 1: printf("\n Enter a element to be pushed");
                scanf("%d",&item);
                push(stack,item);
                break;

        case 2: pop(stack);
                break;

        case 3: palindrome(stack);
                break;

        case 4:display(stack);
                break;

        case 5: exit(0);
                break;

        defult:printf("\nEnd of Execution");


    }

}while(ch!=5);


}
