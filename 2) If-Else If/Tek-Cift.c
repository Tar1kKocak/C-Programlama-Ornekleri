#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
 {
	// Yazilimin amaci : Girilen sayinin tek mi cift mi oldugunu ogrenmek.
	
	setlocale(LC_ALL,"Turkish");
	
	int sayi;
	
	printf("Tek mi Çift mi olduğunu öğrenmek istediğiniz sayıyı giriniz.\n");
	scanf("%d",&sayi);
	
	if (sayi % 2 == 0) {
		printf("%d sayısı çift bir sayıdır.\n",sayi);
	}
	else {
		printf("%d sayısı tek bir sayıdır.\n",sayi);
		
	}
	/* yüksek basamak değerlilerin sonuç kısmında sorun çıkıyor hocaya sor */



	return 0;
	}
