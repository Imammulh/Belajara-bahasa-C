#include <stdio.h>

int main(){
	int a[201]={0}, i, nilai, n;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &nilai);
		a[nilai+100]++;
	}
	for(i=0;i=200;i++){
		if(a[i]) printf("%d ada %d\n", i-100, a[i]);
	}
	return 0;
	
}
