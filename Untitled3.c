#include <stdio.h>
int main(int argc,char **argv){

int yukseklik,j=1,depo,bosluk,depo2;
	printf("Lutfen ucgen yuksekligi giriniz: ");
	scanf("%d",&yukseklik);
	depo2 = yukseklik;
	while(yukseklik>0){
		while(j<=(2*depo2)-1){		
			if (j%2==1){
				bosluk= yukseklik - 1;
				depo = j;
				if (bosluk>=0){
					while(bosluk>0){
						printf(" ");
						bosluk--;
					}
					while(depo>0){
						printf("*");
						depo--;
					}
					while(bosluk>0){
						printf(" ");
						bosluk--;
					}
				} 
				printf("\n");
				j+=2;
				yukseklik-=1;
						
									
			}
			
		}
	}


}

