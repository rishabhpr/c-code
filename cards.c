/*
 * Program to evaluate face values
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
	char card_name[3];//extra for sentinel character /O
	int count=0;
	
	
	while(card_name[0]!='X'){
	puts("Enter the card name");
	scanf("%2s",card_name);
	int val=0;
	switch(card_name[0]){
	case 'K':val=10;break;
	case 'Q':val=10;break;
	case 'J':val=10;break;
	case 'A':val=11;break;
	default: val=atoi(card_name);
		if(val>10 || val<=0)
		{puts("invalid value");}	
	}
	
	if(val>=3 && val <=6)
		count++;
	if(val==10)
		count--;
	printf("The current count : %i\n",count);
	printf("Count is stored in %p location",&count);
	}
	return 0;
}
