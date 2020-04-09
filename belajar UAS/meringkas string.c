#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char a[100000];
int counter=1, i;
int main(){
	fgets(a, sizeof(a), stdin);
	for(i=0; i<strlen(a); i++){
		a[i]=toupper(a[i]);
	}
	for(i=0;i<strlen(a);i++){
		if(a[i]==a[i+1]){
			++counter;
		}
		else{
			printf("%d%c", counter, a[i]);
			counter=1;
		}
	}
	printf("\n");
	return 0;
}

