#include <stdio.h>
#include <stdlib.h>

void print(int a[],int n){

int i;
for(i=0;i<n;i++){
    printf("%d \n",a[i]);
}

}

void bubble(int a[], int n){
int i,j,temp;
for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
        if(a[i]>a[j]){
            temp = a[i];
            a[i] = a[j];
            a[j] = temp;
        }
    }
}

}


int main()
{
   int i,j,temp;
   int a[5] = {1,4,6,7,2,8,7,5};
   int n = sizeof(a)/sizeof(a[0]);
   printf("Before sorting array elem");
   print(a,n);
   bubble(a,n);
   printf("After sporting array element are");
   print(a,n);
}
