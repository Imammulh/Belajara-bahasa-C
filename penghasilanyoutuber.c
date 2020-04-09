/*
durasi video <= 5 menit = 1$/10.000 viewers
durasi video > 5 menit && durasi video <= 15 menit = 2.5$/10.000 viewers
durasi video > 15 menit = 3.5$/10.000 viewers
viewers<10.000 = 0$
*/
#include <stdio.h>

int main(){
	int view;
	float durasi, hasil;
	scanf ("%f %d", &durasi, &view);
	if(view>=10000){
		if(durasi<=5){
			hasil=1*(int)(view/10000);
		}
		else if(durasi>5 && durasi<=15){
			hasil=2.5*(int)(view/10000);
		}
		else if(durasi>15){
			hasil=3.5*(int)(view/10000);
		}
		printf("%.1f dollar\n", hasil);
	}
	
	else
		printf("Tidak ada bayaran\n");
}
