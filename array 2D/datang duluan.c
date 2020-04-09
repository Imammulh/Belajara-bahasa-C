//int searchOrder(int n, int a[] int value){
//	int i;
//	for(i=0;i<n && a[i]<value;i++){
//		if(a[i] == value) return i;
//	}
//	return -i;
//}


#include <stdio.h>

int arr[100000]={0};
int i, a, count;
int main(){
	for(i=1;i<=100;i++){
		scanf("%d", &a);
		if(a){
			arr[a]=++count;
		}
		else if(a == 0) break;
	}
	
	for(i=100;i>=1;i--){
		if(arr[i]!=0){
			printf("%d\n", arr[i]);
		}
	}
}
