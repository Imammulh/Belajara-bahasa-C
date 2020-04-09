

#include <stdio.h>

/*
int main(){
	int nilai, sum=0;
	scanf ("%d", &nilai);
	while(nilai!=-9){
		sum+=nilai;
		scanf("%d", &nilai);
	}
	printf("%d", sum);
}
*/
/*
int main(){
	int n, nilai, sum=0;
	scanf("%d", &n);
	while (n--){
		scanf("%d", &nilai);
		sum+=nilai;
	}
	printf ("%d", sum);
}
*/
/*
int main(){
	int i, n, nilai, sum=0;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
	
	scanf("%d", &nilai);
	sum+=nilai;
	}
	printf("%d", sum);
}
*/
/*
int main(){
	int a, b, c;
	double d;
	scanf("%d", &a);
	while(a!=9){
		scanf("%d %d", &b, &c);
			if(a==1){
				d=b+c;
			}
			else if(a==2){
				d=b-c;
			}
			else if(a==3){
				d=b*c;
			}
			else if(a==4){
				d=(float)b/c;
			}
		printf("%.2lf\n", d);
		scanf("%d", &a);
	}
}
*/
int main(){
	int a, b, c, n, sum=0, nilai;
	scanf("%d", &n);
	while(n--){
		scanf ("%d", &nilai);
		if(nilai<0){
			nilai=nilai*-1;
		}
		while(nilai!=0){
			sum+=(nilai%10);
			nilai/=10;
		}
		printf("%d\n", sum);
		sum=0;
	}
}

