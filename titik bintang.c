#include <stdio.h>

int main(){
	int b, k, i, j, n, kasus;
	scanf("%d", &n);
	for(kasus=1;kasus<=n;kasus++){
		scanf("%d %d", &b, &k);
		for(i=1;i<=b;i++){
			for(j=1;j<=k;j++){
				if((i+j)%2 == 0) printf("*");
				else printf(".");
			}
			printf("\n");
		}
		if (kasus != n) printf("\n");
	}
}
