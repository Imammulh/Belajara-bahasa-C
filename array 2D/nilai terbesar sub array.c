#include <stdio.h>

void transpose(int row, int col, int a[N][N]){
	int i, j;
	for (i=0; i<row;i++){
		for(i=0;j<col;j++){
			b[j][i]=a[i][j];
		}
	}
}

//void flipV(int row, int col, int a[N][N], int b[N][N]){
//	int i, j;
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			b[row-i-1[j]]=a[i][j];
//		}
//	}
//}
//
//void flipH(int row, int col, int a[N][N], int b [N][N]){
//	int i, j;
//	for(i=0;i<row;i++){
//		for(j=0;j<col;j++){
//			b[row][col-j-1]=a[i][j];
//		}
//	}
//}

int main(){
	int x[N][N], y[N][N];
	scanf("%d %d", &m, &n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++){
			scanf("%d", &x[i][j]);
	transpose(m,n,x,y);
}
