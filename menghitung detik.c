#include <stdio.h>

int main(){
	float a, b, c;
	scanf("%f %f %f", &a, &b, &c);
	a= (int)a;
	b= (int)b;
	c= (int)c;
	printf ("%.0f %.0f %.0f\n", c, b, a);
	return 0;	
}
