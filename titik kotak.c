#include <stdio.h>

int main(){
	int kasus, n, baris, kolom, b, k;
	scanf("%d", &n);
	for(kasus=1;kasus<=n;kasus++){
		scanf("%d %d", &b, &k);
		for(baris=1;baris<=b;baris++){
			for(kolom=1;kolom<=k;kolom++){
				if (baris == 1 || baris == b || kolom == 1 || kolom == k)
					printf("*");
				else printf(".");
			}
			printf("\n");
		}
		if(kasus != n) printf("\n");
	}
}
