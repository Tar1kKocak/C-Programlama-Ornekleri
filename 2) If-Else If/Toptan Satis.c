#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main() 
{
	// Yazilimin amaci :  Adet sayisina gore fiyat degisikligi gosteren toptan satis uygulamasi.
	
	setlocale(LC_ALL,"Turkish");
	int adet;
	float adetucreti; 
	
	/* 0-100 adet = a.fiyatý = 3 tl
		100-200 adet = a.fiyatý = 2.5 tl
		200-300 adet = a.fiyatý = 2 tl
		300-400 adet = a.fiyatý = 1.5 tl
		400+ adet = a.fiyatý = 0.75 tl  */
		
		
	printf ("Kaç adet ürün alacaksýnýz?\n");
	scanf ("%d",&adet);
	
	if (adet >=400 ) {
		adetucreti = 0.75;
	}
	else if (adet>=300 && adet < 400) {
		adetucreti = 1.5;
	}
	else if (adet >=200 && adet < 300) {
		adetucreti = 2;
	}
	else if (adet >= 100 && adet < 200) {
		adetucreti = 2.5;
	}
	else if (adet > 0 && adet < 100) {
		adetucreti = 3;
	}
	else {
		printf("Lütfen 1 veya 1 den büyük bir deðer giriniz..\n");
	}
	
	printf ("Toplam ödenecek tutar = %.3f", adet*adetucreti);
	
	
	
	return 0;
}
