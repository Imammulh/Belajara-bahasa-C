/*
memisahkan bilbul dan pecahan(5 digit di belakang)


#include <stdio.h>

int main(){
	float bil, bilpec;
	int bilbul;
	scanf("%f", &bil);
	bilbul=(int)bil;
	bilpec=bil;
	printf("%d %.4f", bilbul, bilpec);
	
}
*/
/*
int main(){
	float b1, b2, b3;
	int bil1, bil2, bil3;
	scanf("%f %f %f", &b1, &b2, &b3);
	bil1=(int)b1;
	bil2=(int)b2;
	bil3=(int)b3;
	printf("%d\n%d\n%d\n", bil3, bil2, bil1);
	return  0;
}
*/

int main (){
	int a, n, i;
	scanf("%d", &n);
	for(i=0;i<n;i++){

		scanf("%d", &a);
			if(a<1000){
				printf("LEBIH KECIL\n");
			}
			else if(a>=1000){
				printf("LEBIH BESAR ATAU SAMA DENGAN\n");
		}
	}
}
