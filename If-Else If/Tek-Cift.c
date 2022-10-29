#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
 {
	setlocale(LC_ALL,"Turkish");
	
	int sayi;
	
	printf("Tek mi Çift mi olduðunu öðrenmek istediðiniz sayýyý giriniz.\n");
	scanf("%d",&sayi);
	
	if (sayi % 2 == 0) {
		printf("%d sayýsý çift bir sayýdýr.\n",sayi);
	}
	else {
		printf("%d sayýsý tek bir sayýdýr.\n",sayi);
		
	}
	/* yüksek basamak deðerlilerin sonuç kýsmýnda sorun çýkýyor hocaya sor */



	return 0;
	}
