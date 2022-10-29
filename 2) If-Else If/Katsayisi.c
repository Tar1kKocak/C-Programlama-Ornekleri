#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
 {
	setlocale(LC_ALL,"Turkish");
	
	int buyuksayi,kucuksayi;
	
	printf("Birbirinin katý olduðunu öðrenmek istediðiniz sayýyý önce büyük sayý olmak üzere giriniz.\n");
	scanf("%d%d",&buyuksayi,&kucuksayi);
	
	if (buyuksayi % kucuksayi == 0) {
		printf("%d sayýsý %d sayýsýnýn bir katýdýr,çarpanýdýr.",buyuksayi,kucuksayi);
	}
	else {
		printf("%d sayýsý %d sayýsýnýn bir katý veya çarpaný deðildir.",buyuksayi,kucuksayi);
	}
	
	
	

	
	
	}
