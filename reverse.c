#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char *s){
	
	size_t len = strlen(s);
	char *t = s+len-1;
	while(t>=s){
		printf("%c",*t);
		t=t-1;
	}
	printf("\n");
}

int main()
{
	char string[]="hello";
	reverse(string);
	return 0;
}