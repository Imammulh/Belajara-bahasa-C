#include <stdio.h>

int main(){
	int kasus, n, b, k, h, v, baris, kolom;
	scanf("%d", &n);
	for(kasus=1;kasus<=n;kasus++){
		scanf("%d %d %d %d", &b, &k, &h, &v);
		for(baris=1;baris<=b;baris++){
			for(kolom=1;kolom<=k;kolom++){
				if(kolom == v || baris == h) printf("ANJING");
				else if(kolom<v) printf(" ");
			}
			printf("\n");
		}
		if(kasus != n) printf("\n");
	}
}
