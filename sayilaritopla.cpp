// kullanicidan iki sayi girilmesini isteyen ve girilen sayilari toplayýp ekrana yazdýran program
#include<stdio.h>
int main(){
	int sayilar[2], toplam=0;
	for(int i=0;i<2;i++){
		printf("Lutfen %d'inci sayiyi giriniz : \n", i+1);
		scanf("%d",&sayilar[i]);
		toplam+=sayilar[i];
	}
	printf("Iki sayinin toplami : %d",toplam);
	return 0;
}
