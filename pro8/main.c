#include <stdio.h>
#include <conio.h>
struct my_struct{
    char name[20];
    int rollno;
};

void main(){
    struct my_struct variable = {"adhi", 201329};
    struct my_struct * ptr;

    ptr =&variable;

    printf("Student name:%s \n",ptr->name);
    printf("Student tollno%d \n",ptr -> rollno);



}
