#include <stdio.h>

int main(){
	long int d;
	double pi=3.14, r, k, l;
	scanf("%ld", &d);
	r=0.5*d;
	k=2*pi*r;
	l=pi*r*r;
	printf("%.2lf %.2lf\n", k, l);
	return 0;
}
