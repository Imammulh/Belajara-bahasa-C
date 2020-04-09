
 /* A 5buah= 1000*/
 /* B 10buah= 200*/
 /* C 10buah=1500*/
 
#include <stdio.h> 

int main(){
	int a=1,b=1,c; 
	while(a<=b++){     
	a+=b;     
	c=--a+b++; 
	} 
	printf("%d",c*a); 
}
