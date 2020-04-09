#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char all[100], kiri[100], kanan[100];
int i, n;
int main(){
	scanf("%d ", &n);
	for(i=0;i<n;i++){
		fgets(all, sizeof(all), stdin);
		char *misah=strtok(all,":");
		strcpy(kiri, misah);
		misah=strtok(NULL,":\n");
		strcpy(kanan, misah);
		if(strcmp(kiri,kanan)==0){
			printf("S\n");
		}
		else if(strlen(kiri)>strlen(kanan)){
			printf("L\n");
		}
		else if(strlen(kiri)<strlen(kanan)){
			printf("U\n");
		}
		else printf("X\n");

	}

	return 0;
}
