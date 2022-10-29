#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() 
{
	setlocale(LC_ALL,"Turkish");
	
	
	int secim;
	
	printf("Lütfen seçiminizi yapýnýz...\n");
	
	printf("1.Ýlkbahar\n2.Yaz\n3.Sonbahar\n4.Kýþ\n");
	scanf("%d",&secim);
	
	
	switch (secim) {
		
		case 1 :printf("Hava çok güzel..."); break;
		case 2 : printf("Hava çok sýcak..."); break;
		case 3 :printf("Hava yaðmurlu..."); break;
		case 4 : printf("Hava karlý..."); break;
		default : printf("Lütfen 1-4 arasýnda bir sayý giriniz...");
		
	}
	
	

	
	return 0;
}
