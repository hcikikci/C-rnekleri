// yaricapi girilen dairenin alanini ve cevresini veren program.
#include<stdio.h>
#define Pi 3.14
int main(){
	float yaricap=0,cevre=0,alan=0;
	printf("Lutfen alanini ve cevresini hesaplamak istediginiz dairenin yaricap uzunlugunu giriniz : ");
	scanf("%f", &yaricap);
	printf("Dairenin alani : %8.3f \nDairenin cevresi : %8.3f",Pi*(yaricap*yaricap), 2*Pi*yaricap);
	return 0;
}

