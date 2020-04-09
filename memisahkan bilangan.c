#include <stdio.h>

int main(){
	long double a, koma;
	long long int integer;
	scanf("%llf", &a);
	integer=(int)a;
	koma=a-integer;
	printf("%lld %.5llf\n", integer, a);
}
