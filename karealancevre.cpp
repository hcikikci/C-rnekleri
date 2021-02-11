// Bir kenari girilen karenin alanini ve cevresini veren program.
#include<stdio.h>

int main(){
	float kenar=0,cevre=0,alan=0;
	printf("Lutfen alanini ve cevresini hesaplamak istediginiz karenin kenar uzunlugunu giriniz : ");
	scanf("%f", &kenar);
	printf("Karenin alani : %8.3f \nKarenin cevresi : %8.3f",kenar*kenar,4.0*kenar);
	return 0;
}
