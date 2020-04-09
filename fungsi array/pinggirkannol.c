#include <stdio.h>
int n, i, d[100000], zero, counter;

int main(){
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &d[i]);
		if (d[i]==0){
			zero++;
		}
	}
	for(i=n-zero;i<n;i++){
		if (d[i]!=0){
			counter++;
		}
	}
	printf("%d\n", counter);
	
	return 0;
}
