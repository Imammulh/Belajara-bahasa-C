#include <stdio.h>
#define N 100000
int a[N], n, i, j, m, x, check;
int main(){
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &m);
	for(i=1; i<=m; i++){
		scanf("%d", &x);
		check=0;
		for(j=1; j<=n; j++){
			if(a[j]==x){
				check++;
				if(check==1) printf("%d",x);
				printf(" %d", j);
			}
			
		}
		
		if(check==0) printf("%d TIDAK ADA", x);
		printf("\n");
	}
}
