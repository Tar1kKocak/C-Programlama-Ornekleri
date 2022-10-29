#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Yazılımın amacı : Girilen sayının rakam değerlerinin toplamını bulmak.

	setlocale(LC_ALL,"Turkish");

	int sayi;
	int basamaksayi=0;
	int toplam=0;

	printf("Lütfen sayý deðerlerinin toplamýný öðrenmek istediðiniz sayýyý giriniz.\n");
	scanf("%d",&sayi);

	int orjsayi = sayi;

	do {

		toplam += sayi%10;
		basamaksayi++;

		sayi = sayi/10;

		}while(sayi>0);


	printf("%d %d basamaklýdýr ve sayý deðerleri toplamý : %d",orjsayi,basamaksayi,toplam);


	return 0;
}
