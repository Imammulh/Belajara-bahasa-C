#include <stdio.h>

int main(){
	double nilai1, nilai2, nilai3, rata;
	scanf("%lf %lf %lf", &nilai1, &nilai2, &nilai3);
	rata=(nilai1+nilai2+nilai3)/3;
	if(rata >= 0 && rata < 30) printf("%.2lfKURANG\n", rata);
	else if(rata >= 30 && rata < 60) printf("%.2lfCUKUP\n", rata);
	else if(rata >= 60 && rata <= 100)printf("%.2lfBAIK\n", rata);
	return 0;
}
