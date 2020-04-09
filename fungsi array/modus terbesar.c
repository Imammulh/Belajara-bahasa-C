#include <stdio.h>
int n, i, d[100000], value, modus, angka_modus;

int main(){
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &value);;
		d[value]++;
	}
	for(i=1;i<1001;i++){
		if(d[i]>=modus){
			modus=d[i];
			angka_modus=i;
		}
	}
	printf("%d\n", angka_modus);
}
