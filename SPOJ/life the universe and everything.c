#include <stdio.h>

int nilai,i;

int main(){
	i=1;
	while(i<=5){
		scanf("%d", &nilai);
		if(nilai!=42){
			printf("%d\n", nilai);
		}
		i++;
	}
	return 0;
}
