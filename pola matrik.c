#include <stdio.h>

int main(){
	int b, k, baris, kolom, nilai;
	scanf("%d %d", &b, &k);
	for(baris=1;baris<=b;baris++){
		for(kolom=1;kolom<=k;kolom++){
			scanf("%d", &nilai);
			if(nilai != -9) printf("%d", &nilai);
			else if (nilai == -9) printf("0");
		}
		printf("\n");
	}
}
