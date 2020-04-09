#include <stdio.h>

int i, n, index, angka[16001]={0}, x=0, y=0, sum;

int main(){
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &index);
		angka[index+8000]++;
	}
	
	for(i=0; i<16001;i++){
		sum+=angka[i];
		if(x==0){
			if(sum>=n/2) x=(i-8000);
		}
		if(y==0){
			if(sum>=n/2 + 1) y=(i-8000);
		}
	}
	if(n%2==0)
		printf("%.2f\n", (x+y)/2.0);
	else 
		printf("%.2f\n", y);
}
