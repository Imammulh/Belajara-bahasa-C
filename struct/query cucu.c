#include <stdio.h>
#include <string.h>

char name[100];

int main(){
	scanf("%s", name);
	if(strcmp("Ari", name)==0)printf("Desi\nEndang\nFitrah\nGani\n");
	else if(strcmp("Endang", name)==0)printf("Joko\nKasep\n");
	else if(strcmp("Budi", name)==0)printf("Hesti\nIta\n");
	else if(strcmp("Cintia", name)==0 || strcmp("Desi", name)==0 || strcmp("Fitrah", name)==0 || strcmp("Gani", name)==0 || strcmp("Hesti", name)==0 || strcmp("Ita", name)==0 || strcmp("Joko", name)==0 || strcmp("Kasep", name)==0 ) printf("Tidak memiliki cucu.\n");
	else printf("Nama tidak ditemukan.\n");
	
	return 0;
}
