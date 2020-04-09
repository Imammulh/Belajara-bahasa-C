#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char kiri[100], kanan[100];
int i, n;
int main(){
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%[^:]:%[^\n]", &kiri, &kanan);
	}
	printf("%s",kanan);
	for(i=0;i<n;i++){
		if(strlen(kiri)>strlen(kanan)){
			printf("L\n");
		}
		else if(strcmp(kiri,kanan)==0){
			printf("S\n");
		}
		else printf("X\n");
	}
	return 0;
}
