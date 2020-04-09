#include <stdio.h>

int integer;
double floating, index;
int main(){
	scanf("%lf", &index);
	integer=(int)index;
	floating=index-integer;
	printf("%d %.5lf\n", integer, floating);
	
	return 0;
}
