#include <stdio.h>
#include <stdlib.h>

void swap(int *num1,int *num2){
*num1 = 2;
*num2 = 1;
}

int main(){
puts("Enter 2 numbers: ");
int num1,num2;
num1=1;
num2=2;
swap(&num1,&num2);
printf("num 1: %i :::: num2: %i \n",num1,num2);
}