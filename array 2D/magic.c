#include <stdio.h>

#define N 100000
int n, i, a[N];
int main(){
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for (i=0;i<n;i++){
		if(i==0){
			printf("%d", a[i]);
		}
		else if(i==1){
			printf("%d", a[i]-a[i-1]);
		} 
		else if (i==2){
			printf("%d", a[i]-2*a[i-1]+a[i-2]);
		}
		else if (i==3){
			printf("%d", a[i]-3*a[i-1]+3*a[i-2]-a[i-3]);
		}
		else if(i==4){
			printf("%d", a[i]-4*a[i-1]+6*a[i-2]-4*a[i-3]+a[i-4]);
		}
		else if(i==5){
			printf("%d", a[i]-5*a[i-1]+10*a[i-2]-10*a[i-3]+5*a[i-4]-a[i-5]);
		}
		else if(i==6){
			printf("%d", a[i]-6*a[i-1]+15*a[i-2]-20*a[i-3]+15*a[i-4]-6*a[i-5]+a[i-6]);
		}
		else if(i==7){
			printf("%d", a[i]-7*a[i-1]+21*a[i-2]-35*a[i-3]+35*a[i-4]-21*a[i-5]+7*a[i-6]-a[i-7]);
		}
		else if(i==8){
			printf("%d", a[i]-8*a[i-1]+28*a[i-2]-56*a[i-3]+70*a[i-4]-56*a[i-5]+28*a[i-6]-8*a[i-7]+a[i-8]);
		}
		else if(i==9){
			printf("%d", a[i]-9*a[i-1]+36*a[i-2]-84*a[i-3]+126*a[i-4]-126*a[i-5]+84*a[i-6]-36*a[i-7]+9*a[i-8]-a[i-9]);
		}
		
		if(i!=n-1) printf(" ");
		else printf("\n");
	}
	return 0;	
}
