#include <stdio.h>

int n, i, j;
int main(){
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if((i+j)%2==0) printf("0");
			else printf("1");
			
			if(j==n) printf("\n");
			else printf(" ");
		}
	}
}
