#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
 {
	setlocale(LC_ALL,"Turkish");
	
	int sayi;
	
	printf("Tek mi �ift mi oldu�unu ��renmek istedi�iniz say�y� giriniz.\n");
	scanf("%d",&sayi);
	
	if (sayi % 2 == 0) {
		printf("%d say�s� �ift bir say�d�r.\n",sayi);
	}
	else {
		printf("%d say�s� tek bir say�d�r.\n",sayi);
		
	}
	/* y�ksek basamak de�erlilerin sonu� k�sm�nda sorun ��k�yor hocaya sor */



	return 0;
	}
