#include <stdio.h>
#include <stdlib.h>

int linearSearch(int a[],int n,int val){

    for(int i=0;i<n;i++){
        if(a[i] == val )
            return i +1;
    }
    return -1;

}

int main()
{
int a[] = {2,4,5,8,2,5};
int val = 5;
int n = sizeof(a)/sizeof(a[0]);
int res = linearSearch(a,n,val);
for(int i = 0; i<n ; i ++)
    printf("%d",a[i]);
printf("\n Element to be searched is:%d",val);

if(res == -1)
    printf("\n Element is not present in the array");

else
    printf("Element is present at %d posisition of array",res);
return 0;
}
