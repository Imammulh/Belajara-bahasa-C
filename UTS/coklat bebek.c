#include <stdio.h>
#include <math.h>

long long int n, nilai;
int main(){
	scanf("%lld", &n);
	nilai=sqrt(n*2);
	while(nilai*(nilai+1)<=n*2){
		nilai++;
	}
	printf("%lld\n", nilai);
	return 0;
}
