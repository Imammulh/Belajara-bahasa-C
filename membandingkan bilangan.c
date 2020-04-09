#include <stdio.h>

int main(){
	int kasus, n, bil;
	scanf("%d", &n);
	for(kasus=1;kasus<=n;kasus++){
		scanf("%d", &bil);
		if(bil>=1000) printf("LEBIH BESAR ATAU SAMA DENGAN\n");
		else printf("LEBIH KECIL\n");
	}
	return 0;
}
