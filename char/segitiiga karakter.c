#include <stdio.h>
int n, i, j;
char ch1, ch2, ch3;
int main(){
	scanf("%d ", &n);
	scanf("%c%c%c", &ch1, &ch2, &ch3);
	for(i=0; i<n; i++){
		for(j=0; j<=i; j++){
			if(j==0 && i<n-1) printf("%c", ch1);
			else if(i==n-1 && j<i) printf ("%c", ch2);
			else if(j==i) printf("%c", ch3);
			else printf(" ");
		}
		printf("\n");
	}
}
