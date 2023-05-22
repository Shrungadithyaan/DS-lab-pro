#include <stdio.h>
#include <stdlib.h>

int n,elem, pos, a[100], i;

void create(){

printf("Enter the Size of the array:");
scanf("%d",&n);
printf("Enter the elements for an array");
for(i=0;i<n;i++){
    scanf("%d",&a[i]);
}

}

void display(){
printf("The array elements are ");
for(i=0;i<n;i++){

    printf("%d",a[i]);
}
}

void insert(){
printf("Enter the position for the new element");
scanf("%d",&pos);
printf("Enter the new  element");
scanf("%d",&elem);

for(i=n-1;i>=pos;i--){
    a[i+1] = a[i];
}
a[pos] = elem;

n = n+1;

}

void delete(){
printf("Enter the position of the element to be deleted ");
scanf("%d",&pos);
elem = a[pos];
for(i=pos;i<n-1;i++){
    a[i] = a[i+1];
}
n= n-1;
printf("The deleted element is %d ",elem);

}
void main(){
int ch;
do{
    printf("**********menu*********");
    printf("\n 1.Create \n 2.Display \n 3.Insert \n 4.Delete \n 5. Exit\n ");
    printf("**************");
    printf("\n Enter your choice:");
    scanf("%d",&ch);
        switch(ch){
    case 1:create();
            break;

    case 2:display();
            break;

    case 3: insert();
            break;

    case 4: delete();
            break;
    case 5 : exit(0);
            break;

    defult:printf("\n Invalid choice entered");
        }
    }while(ch!=5);


}

