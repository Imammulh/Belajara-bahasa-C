#include <stdio.h>
#include <math.h>

int bubbleSort(int n, int a[16000]){
	int i, j, t;
	for(i=0; i<n; i++){
		for(j=1; j<n-i; j++){
			if(a[j-1]>a[j]){
				t= a[j];
				a[j-1]=a[j];
				a[j]=t;
			}
		}
	}
}
int main(){
	int a[16000], n, i, t, j; 
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &a[i]);
	}
//	bubble sort
//	for(i=0; i<n; i++){
//		for(j=1; j<n-i; j++){
//			if(a[j] < a[j-1]){
//				t=a[j-1];
//				a[j-1]=a[j];
//				a[j]=t;
//			}
//		}
//	}

	bubbleSort(n, a);
	for(i=0; i<n; i++){
		printf("%d", a[i]);
		if(i==n-1) printf("\n");
		else printf(" ");
	}
	if(n%2 == 0) printf("%.2f", ((a[n/2-1]+a[n/2])*0.5));
	if(n%2 != 0) printf("%d", a[n/2]);
	return 0;
}
