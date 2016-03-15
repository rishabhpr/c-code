#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char tracks[][80] = {
	"Hello","Uptown funk","Blank space","Photograph","Shoop"
	};

void find_track(char search_for[]){
	int i;
	for(i=0;i<5;i++){
		if(strstr(tracks[i],search_for))
			printf("Track %i : %s\n",i,tracks[i]);
	}
	if(i==5)
		puts("Track not found");

}


int main(){
	char search_for[80];
	puts("Search for: ");
	scanf("%s",search_for);
	//fgets(search_for,80,stdin);
	find_track(search_for);
	return 0;
}


