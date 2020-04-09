#include <stdio.h>

int main(){
	int a = 20;
	int *p;
	p = &a;
	printf("addres p is %d bytes\n", p);
	printf("size of integer is %d bytes\n", sizeof(int));
	printf("addres p now is %d bytes \n", p+1);
	printf("value p is %d \n", *p);
	printf("value p+1 is %d \n", *(p+1));
}
