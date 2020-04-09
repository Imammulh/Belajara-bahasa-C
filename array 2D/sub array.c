#include <stdio.h>

int start, A[100000], value, sub, terbesar=0, i, j=0, k,temp;

int main(){
scanf ("%d", &start);
for (i=0; i<start; i++) {
	scanf ("%d", &value);
	A[i]=value;
}

scanf("%d", &sub);
	j=sub;
	for(k=0; k<(start-sub+1); k++){
		for(i=k;i<j;i++){
			if(terbesar<A[i]) terbesar=A[i];
		}
		j++;
		printf("%d", terbesar);
		if(k<(start-sub)) printf(" ");
		else printf("\n");
		terbesar=0;
	}

}
