#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int n, i, j;
char a[3];

int main(void){
	scanf("%d ", &n);
	for(i=0; i<3; i++){
		scanf("%c", &a[i]);
	}
	for(i=0; i<n; i++){
		for(j=0; j<=i; j++){
			if(j==0 && i<n-1){
				printf("%c", a[0]);
			}
			else if(j==i){
				printf("%c", a[2]);
			}
			else if(i==n-1 && j<n-1){
				printf("%c", a[1]);
			}
			else printf(" ");
		}
		printf("\n");
	}
	
	return 0;
}
