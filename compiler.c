#include <stdio.h>


int main(){
	int usia, orangtua;
	float uang;
	scanf("%d %d %f", &usia, &orangtua, &uang);
	if(usia>=0 && usia<13){
		if(orangtua == 0){
			if(uang>=7.50 && uang<10.50){
				printf("Rate    : G\n");
				printf("Schedule: Matinee\n");
			}
			else if(uang>=10.50){
				printf("Rate    : G\n");
				printf("Schedule: Matinee, Evening\n");
			}
			else
				printf("Insufficient fund\n");
		}
		else if(orangtua == 1){
			if(uang>=7.50 && uang<10.50){
				printf("Rate    : G, PG\n");
				printf("Schedule: Matinee\n");
			}
			else if(uang>=10.50){
				printf("Rate    : G, PG\n");
				printf("Schedule: Matinee, Evening\n");
			}
			else
				printf("Insufficient fund\n");
		}
	}
	if(usia>=13 && usia<16){
		if(orangtua == 0){
			if(uang>=7.50 && uang<10.50){
				printf("Rate    : G, PG\n");
				printf("Schedule: Matinee\n");
			}
			else if(uang>=10.50){
				printf("Rate    : G, PG\n");
				printf("Schedule: Matinee, Evening\n");
			}
			else
				printf("Insufficient fund\n");
		}
		else if(orangtua == 1){
			if(uang>=7.50 && uang<10.50){
				printf("Rate    : G, PG, R\n");
				printf("Schedule: Matinee\n");
			}
			else if(uang>=10.50){
				printf("Rate    : G, PG, R\n");
				printf("Schedule: Matinee, Evening\n");
			}
			else
				printf("Insufficient fund\n");
		}
	}
	if(usia>=16){
		if (orangtua == 0 && orangtua == 1){
			if(uang>=7.50 && uang<10.50){
				printf("Rate    : G, PG, R\n");
				printf("Schedule: Matinee\n");
			}
			else if(uang>=10.50){
				printf("Rate    : G, PG, R\n");
				printf("Schedule: Matinee, Evening\n");
			}
			else
				printf("Insufficient fund\n");
		}
	}
	return 0;
}

