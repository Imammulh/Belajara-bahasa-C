#include <stdio.h>
#define personal 0
#define bisnis 1
#define standar 0
#define gold 1
#define platinum 2

int main(){
	int akun, kartu, saldo;
	scanf("%d %d %d", &akun, &kartu, &saldo);
	if(akun == personal){
		if(kartu == standar && saldo>=0) 
			puts("1.2%");
		if(kartu == gold){
			if(saldo >= 5000)
				puts("2.3%");
			else
				puts("1.9%");
		}	
	}
	
	else{
		if(kartu == standar && saldo>=1500 )
			puts("1.7%");
		else if(kartu == platinum && saldo>=10000)
			puts("2.5%");
		else
			puts("1.2%")	;
	}
	return 0;
}
