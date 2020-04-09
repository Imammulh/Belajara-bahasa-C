#include <stdio.h>
#define size 100
int main (){
//	int a[size], n, i;
//	scanf("%d", &n);
//	i=n; 
//	while (i){
//	scanf("%d", &a[i]);
//	printf("%d\n", a[n-i]);
//	}

int a[size][size];
int i, j, m, n;
scanf("%d %d", &m, &n);
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		scanf("%d", &a[i][j]);
		printf("%d", a[i][j]);
		if(j == n-1) printf("\n");
		else printf(" ");
		
		
	}
}



//	int i, n, mid, a[101]={0};
//	scanf("%d", &n);
//	for (i=0; i<n; i++) scanf("%d", &a[i]);
//	mid = n+1/2;
//	printf("%d\n", a[mid]);

}

//#include <stdio.h>
//#define SIZE 100
//int main() {
//	int a[SIZE], i, n;
//	scanf("%d", &n); // baca banyaknya data
//					 // membaca masukan dan disimpan ke array
//	for (i=0; i<n; i++)
//	scanf("%d", &a[i]);
//	printf("%d\n", a[n/2]); // akses isi array
//return 0;
//}
