#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() 
{
	// Yazilimin amaci : Mevsime gore hava sartlarini ogrenmek.
	
	setlocale(LC_ALL,"Turkish");
	
	
	int secim;
	
	printf("Lütfen seçiminizi yapınız...\n");
	
	printf("1.İlkbahar\n2.Yaz\n3.Sonbahar\n4.Kış\n");
	scanf("%d",&secim);
	
	
	switch (secim) {
		
		case 1 :printf("Hava çok güzel..."); break;
		case 2 : printf("Hava çok sıcak..."); break;
		case 3 :printf("Hava yağmurlu..."); break;
		case 4 : printf("Hava karlı..."); break;
		default : printf("Lütfen 1-4 arasında bir sayı giriniz...");
		
	}
	
	

	
	return 0;
}
