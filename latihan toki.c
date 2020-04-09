#include <stdio.h>
#include <math.h>

int main(){
	long int a, b;
	double c, d;
	scanf("%ld %ld %lf", &a, &b, &c);
	d=a/b+c;
	printf("%.2lf\n", d);
	return 0;
}


