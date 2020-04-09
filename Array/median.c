
#include <stdio.h>

int i, j, n, a, angka[16001], data, nilai;

int main(){
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &angka[i]);
//		scanf("%d", &nilai);
//		angka[i]=nilai;
	}

	for(i = 0; i < n; ++i){
		for(j = i + 1; j < n; ++j){
			if (angka[i] > angka[j]) 
                {
 
                    a =  angka[i];
                    angka[i] = angka[j];
                    angka[j] = a;
 					
                }
		}

		
	}
	if(n%2==0){
		printf("%.2f", (angka[n/2]+angka[n/2-1])*0.5);
	}
	
	else if(n%2!=0){
		printf("%.2f", angka[n/2]);
	}

}
