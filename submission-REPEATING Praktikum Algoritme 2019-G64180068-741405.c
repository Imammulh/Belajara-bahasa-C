#include <stdio.h>

int a, b, c, p=1;

int main(){
	scanf("%d", &a);
	while(p<=a){
		scanf("%d", &c);
		if(c<1000)
		printf("LEBIH KECIL\n");
		else
		printf("LEBIH BESAR ATAU SAMA DENGAN\n");
		p=p+1;
	}
}
