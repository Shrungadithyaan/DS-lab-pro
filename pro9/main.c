#include <stdio.h>
#include <stdlib.h>

int main()
{
    int * ptr;
    int i,n=5;

    ptr = malloc(n*sizeof(int));
    for(i=0;i<n;i++)
        ptr[i] = i;

    printf("\n Array Element are\n");
    for(i=0;i<n;i++)
        printf("%d",ptr[i]);

}

