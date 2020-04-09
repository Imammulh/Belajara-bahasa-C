#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char kalimat[250], diganti, pengganti;
int i;
int main(void) {
	scanf("%c %c ", &diganti, &pengganti);
	fgets(kalimat, sizeof(kalimat), stdin);
	
	for(i=0; i<strlen(kalimat); i++){
		if(kalimat[i]==toupper(diganti)){
			kalimat[i]=toupper(pengganti);
		}
		else if(kalimat[i]==tolower(diganti)){
			kalimat[i]=tolower(pengganti);
		}
	}
	printf("%s", kalimat);
	
	
	return 0;
}

