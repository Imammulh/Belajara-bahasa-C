#include <stdio.h>

int row, col, i, j;
int main(){
	scanf("%d %d %d %d", &row, &col, &i, &j);
	int a[row][col];
	for(i=0;i<=row;i++){
		for(j=0;j<=col;j++){
			scanf ("%d", &a[i][j]);
			
		}
	}
}
