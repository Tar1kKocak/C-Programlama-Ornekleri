#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
 {
	setlocale(LC_ALL,"Turkish");
	
	int buyuksayi,kucuksayi;
	
	printf("Birbirinin kat� oldu�unu ��renmek istedi�iniz say�y� �nce b�y�k say� olmak �zere giriniz.\n");
	scanf("%d%d",&buyuksayi,&kucuksayi);
	
	if (buyuksayi % kucuksayi == 0) {
		printf("%d say�s� %d say�s�n�n bir kat�d�r,�arpan�d�r.",buyuksayi,kucuksayi);
	}
	else {
		printf("%d say�s� %d say�s�n�n bir kat� veya �arpan� de�ildir.",buyuksayi,kucuksayi);
	}
	
	
	

	
	
	}
