#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
 {
     // Yazilimin Amaci : Ay'a gore mevsimini bulmak.

	setlocale(LC_ALL,"Turkish");
	int aynumara;

	printf("1.Ocak\n2.Þubat\n3.Mart\n4.Nisan\n5.Mayýs\n6.Haziran\n7.Temmuz\n8.Aðustos\n9.Eylül\n10.Ekim\n11.Kasým\n12.Aralýk\n");
	printf("\nHangi mevsim olduðunu öðrenmek istediðiniz ayýn numarasýný giriniz...\n");
	scanf("%d",&aynumara);

	switch(aynumara) {

		case 1 :
			printf("Seçtiðiniz ayýn mevsimi kýþ.");
			break;

		case 2 :
			printf("Seçtiðiniz ayýn mevsimi kýþ.");
			break;

		case 3 :
			printf("Seçtiðiniz ayýn mevsimi ilkbahar.");
			break;

		case 4 :
			printf("Seçtiðiniz ayýn mevsimi ilkbahar.");
			break;

		case 5 :
			printf ("Seçtiðiniz ayýn mevsimi ilkbahar.");
			break;

		case 6 :
			printf ("Seçtiðiniz ayýn mevsimi yaz.");
			break;

		case 7 :
			printf ("Seçtiðiniz ayýn mevsimi yaz.");
			break;

		case 8 :
			printf("Seçtiðiniz ayýn mevsimi yaz.");
			break;

		case 9 :
			printf ("Seçtiðiniz ayýn mevsimi sonbahar.");
			break;

		case 10 :
			printf("Seçtiðiniz ayýn mevsimi sonbahar.");
			break;

		case 11 :
			printf("Seçtiðiniz ayýn mevsimi sonbahar.");
			break;

		case 12 :
			printf("Seçtiðiniz ayýn mevsimi sonbahar.");
			break;

		default :
			printf ("Lütfen 1-12 arasýnda bir deðer giriniz...");

	}

	return 0;
	}
