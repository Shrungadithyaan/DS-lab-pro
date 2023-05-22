#include <stdio.h>
#include <stdlib.h>

char ans[100],str[100],pat[100],rep[100];
int i,j,k,m,c,flag = 0;

void stringrep(){

i=j=m=c=0;
while(str[c]!='\0'){

    if (str[m] == pat[i]){

        m++ , i++;

        if(pat[i]=='\0'){

            flag=1;
            for(k=0;rep[k]!='\0';k++,j++)
                ans[j] = rep[k];

            i=0;
            c = m;


        }
    }
    else{


        ans[j] = str[c];

        j++;
        c++;

        m = c;
        i = 0;

    }


}
ans[j] = '\0';

}
void main(){

printf("Enter the main string");
scanf("%s",&str);
printf("Enter the pattern string");
scanf("%s",&pat);
printf("Enter the replace string");
scanf("%s",&rep);

stringrep();

if(flag==1){
    printf("The result string %s",ans);
}
else{
    printf("Pattern not found");
}


}
