#include <stdio.h>
#include <stdlib.h>

void display(char msg[]){
printf("Quote is : %s\n",msg);
printf("Size of quote is : %i",sizeof(msg));
printf("The msg string is stored at : %p\n",msg);
}

int main(){

int s[] = {1,2,3};
printf("result : %i",2[s]);
int *t=s;
s=t;
return 0;
}