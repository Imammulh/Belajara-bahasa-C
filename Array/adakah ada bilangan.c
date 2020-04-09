#include <stdio.h>

int a[201], i, n, m, index;

int main (){
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf ("%d", &index);
		a[index+100]=1;
	}
	
	scanf("%d", &m);
	for(i=0;i<m;i++){
		scanf("%d", &index);
		a[index+100]=0;
	}
	for(i=0;i<201;i++){
		if(a[i]==1) printf("%d\n", i-100);
	}
	
}
