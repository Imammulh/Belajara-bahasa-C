#include <stdio.h>

int main(){
		long int a, b;
		double c, d;
		scanf("%ld %ld\n", &a, &b);
		scanf("%lf", &c);
		d=a/b+c;
		printf("%.2lf", d);
	return 0;
}


