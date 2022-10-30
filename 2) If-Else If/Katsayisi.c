#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
 {
	// Yazilimin amaci : Girilen iki sayinin birbirinin kati olup olmadigini bulmak.
	
	setlocale(LC_ALL,"Turkish");
	
	int buyuksayi,kucuksayi;
	
	printf("Birbirinin katı olduğunu öğrenmek istediğiniz sayıyı önce büyük sayı olmak üzere giriniz.\n");
	scanf("%d%d",&buyuksayi,&kucuksayi);
	
	if (buyuksayi % kucuksayi == 0) {
		printf("%d sayısı %d sayısının bir katıdır,çarpanıdır.",buyuksayi,kucuksayi);
	}
	else {
		printf("%d sayısı %d sayısının bir katı veya çarpanı değildir.",buyuksayi,kucuksayi);
	}
	
	
	

	
	
	}
