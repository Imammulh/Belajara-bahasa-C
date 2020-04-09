#include <stdio.h>
#define N 100000
int tengah;
int binSearch(int awal,int akhir,int x,int a[N]){
	tengah= (awal+akhir)/2;
	if(a[tengah]==x) return tengah;
	else if(a[tengah] < x){
		awal = tengah;
		return binSearch(awal, akhir, x, a);
	}
	
	else if(a[tengah] > x){
		akhir = tengah;
		return binSearch(awal, akhir, x, a);
	}
	
}


int main(){
	int n, i, a[N], x;
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &x);
	printf("%d\n", binSearch(0, n-1, x, a));
}
