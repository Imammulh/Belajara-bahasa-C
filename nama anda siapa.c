#include <stdio.h>
#define personal 0
#define business 1
#define standard 0
#define gold 1
#define platinum 2

int main(){
	int account = personal; 
	int level = platinum;
	int balance = 15000; 
	
	if(account == personal){
		if(level == standard && balance >= 0)
			printf("1.2%");
		if(level == gold){
			if(balance > 5000)
				printf("2.3%");
			else
				printf("1.9%");
		}
	}	
	else{
		if(level == standard && balance >= 1500)
			printf("1.7%");
		if(level == platinum && balance >= 10000)
			printf("2.5%");
	}
	return 0;
}

