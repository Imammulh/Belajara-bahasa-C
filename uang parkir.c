/*
bus (1) (1 jam=5000), (jam>1 =3000)
mobil (2) (1 jam=3000), (jam>1 =1500)   if jam>=14 stop
motor (3) (1 jam=2000), (jam>1 =1000)
*/
#include <stdio.h>

int main(){
	int jk, t1, t2, denda=0, jam;
	scanf("%d %d %d", &jk, &t1, &t2);
	
	if(t2>t1){
		jam=t2-t1;
		if(jk==1){
			if(jam==1){
				denda=5000;
			}
			else if(jam>1 && jam<14){
				denda=5000+(jam-1)*3000;
			}
			else
				denda=5000+13*3000;
		}
		if(jk==2){
			if(jam==1){
				denda=3000;
			}
			else if(jam>1 && jam<14){
				denda=3000+(jam-1)*1500;
			}
			else
				denda=3000+13*1500;
		}
		if(jk==3){
			if(jam==1){
				denda=2000;
			}
			else if(jam>1 && jam<14){
				denda=2000+(jam-1)*1000;
			}
			else
				denda=2000+13*1000;
		}
	}
	if(t1>t2){
		jam=24-(t1-t2);
		if(jk==1){
			if(jam==1){
				denda=5000;
			}
			else if(jam>1 && jam<14){
				denda=5000+(jam-1)*3000;
			}
			else
				denda=5000+13*3000;
		}
		if(jk==2){
			if(jam==1){
				denda=3000;
			}
			else if(jam>1 && jam<14){
				denda=3000+(jam-1)*1500;
			}
			else
				denda=3000+13*1500;
		}
		if(jk==3){
			if(jam==1){
				denda=2000;
			}
			else if(jam>1 && jam<14){
				denda=2000+(jam-1)*1000;
			}
			else
				denda=2000+13*1000;
		}
	}
/*
	if(t2=t1){
		if(jk==1){
			denda=5000;
		}
		else if(jk==2){
			denda=3000;
		}
		else if(jk==3){
			denda=2000;
		}	
	}
*/
		printf("%d\n", denda);
	
}

