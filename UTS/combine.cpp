#include <stdio.h>
#define N 100000
int a[N]={0}, i, nilai, n;
int main(){
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &nilai);
		a[nilai]++;
	}
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &nilai);
		a[nilai]++;
	}
	
	for(i=1; i<N; i++){
		while(a[i]>0){
			printf("%d\n", i);
			a[i]--;
		}
	}
}
