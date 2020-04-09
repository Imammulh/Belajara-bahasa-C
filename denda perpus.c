/*
perpus memiliki 3 keanggotaan:
	1. clasic
	2. primer
	3. infinite
	
	jumlah buku pinjaman tidak dibatasi, 
	waktu peminjaman buku 5 hari untuk semua level
	
	denda:
		classic (3) (telat<7)=4$/hari/buku
					(telat>=7 telat<14)=6$/hari/buku
					(telat>=14)=7$/hari/buku
				
		primer (2) (telat<7)=3$/hari/buku
				(telat>=7)5$/hari/buku
		
		infinite (1) (telat>0)=2$/hari/buku
		
		setiap tanggal pengembalian (t2) kelipatan 3 denda dipotong 20%
		
		x=hari
		*/
#include <stdio.h>

int main(){
	int lv, jmlh, t1, t2, denda=0, hari;
	scanf("%d %d %d %d", &lv, &jmlh, &t1, &t2);
	
	hari=t2-t1-5;
	if(lv==3){
		if(hari<7){
			denda=4*hari*jmlh;
		}
		else if(hari>=7 && hari<14){
			denda=6*hari*jmlh;
		}
		else
			denda=7*hari*jmlh;
	}
	if(lv==2){
		if(hari<7){
			denda=3*hari*jmlh;
		}
		else
			denda=5*hari*jmlh;
	}
	if(lv==1){
		if(hari>=1){
			denda=2*hari*jmlh;
		}
	}
	if(t2%3==0){
		denda=denda*0.8;
	}
	
	printf("%d\n", denda);
}	
