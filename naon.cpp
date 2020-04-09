#include <stdio.h>

int c=0;

int naon(int x, int y){
	int hasil;
	c++;
	if(y == 0)
		hasil=1;
	else if (y == 1)
		hasil = x;
	else
		hasil = naon(x, y/2)*naon(x, y/2)*naon(x, y%2);
	return hasil;
}

int main (){
	int x, y, hasil;
	scanf ("%d %d", &x, &y);
	hasil=naon(x, y);
	printf("%d\n", c);
	
	return 0;
}
