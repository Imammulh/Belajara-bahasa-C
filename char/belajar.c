#include <stdio.h>
#include <ctype.h>
//void meringkasString (char c1, char c2, int i){
//	c2=c1;
//	while(c1!='\n'){
//		if(toupper(c1)==toupper(c2)){
//			i++;
//		}
//		else {
//			return printf("%d%c", i, toupper(c2));
//			i=1;
//		}
//		c2=c1;
//		scanf("%c", &c1);
//	}
//}

int main(){
	char c1, c2;
	int i=0;
	scanf("%c", &c1);
	c2=c1;
	while(c1!='\n'){
		if(toupper(c1)==toupper(c2)){
			i++;
		}
		else {
			printf("%d%c", i, toupper(c2));
			i=1;
		}
		c2=c1;
		scanf("%c", &c1);
	}
	printf("%d%c", i, toupper(c2));
	return 0;
}
