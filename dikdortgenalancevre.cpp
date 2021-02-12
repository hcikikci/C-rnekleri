// İki kenari girilen dikdörgenin alanini ve cevresini veren program.
#include<stdio.h>

int main(){
	float kenar[2],cevre=0,alan=0;
	printf("Lutfen alanini ve cevresini hesaplamak istediginiz dikdortgenin kenar uzunluklarını giriniz : ");
	for(int i=0;i<2;i++){
		scanf("%f", &kenar[i]);
	}
	
	printf("Dikdortgenin alani : %8.3f \nDikdortgenin cevresi : %8.3f",kenar[0]*kenar[1], (kenar[0] + kenar[1])*2.0);
	return 0;
}
