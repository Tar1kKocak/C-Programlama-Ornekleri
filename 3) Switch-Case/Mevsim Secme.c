#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() 
{
	setlocale(LC_ALL,"Turkish");
	
	
	int secim;
	
	printf("L�tfen se�iminizi yap�n�z...\n");
	
	printf("1.�lkbahar\n2.Yaz\n3.Sonbahar\n4.K��\n");
	scanf("%d",&secim);
	
	
	switch (secim) {
		
		case 1 :printf("Hava �ok g�zel..."); break;
		case 2 : printf("Hava �ok s�cak..."); break;
		case 3 :printf("Hava ya�murlu..."); break;
		case 4 : printf("Hava karl�..."); break;
		default : printf("L�tfen 1-4 aras�nda bir say� giriniz...");
		
	}
	
	

	
	return 0;
}
