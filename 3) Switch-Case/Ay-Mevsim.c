#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
 {
     // Yazilimin Amaci : Ay'a gore mevsimini bulmak.

	setlocale(LC_ALL,"Turkish");
	int aynumara;

	printf("1.Ocak\n2.�ubat\n3.Mart\n4.Nisan\n5.May�s\n6.Haziran\n7.Temmuz\n8.A�ustos\n9.Eyl�l\n10.Ekim\n11.Kas�m\n12.Aral�k\n");
	printf("\nHangi mevsim oldu�unu ��renmek istedi�iniz ay�n numaras�n� giriniz...\n");
	scanf("%d",&aynumara);

	switch(aynumara) {

		case 1 :
			printf("Se�ti�iniz ay�n mevsimi k��.");
			break;

		case 2 :
			printf("Se�ti�iniz ay�n mevsimi k��.");
			break;

		case 3 :
			printf("Se�ti�iniz ay�n mevsimi ilkbahar.");
			break;

		case 4 :
			printf("Se�ti�iniz ay�n mevsimi ilkbahar.");
			break;

		case 5 :
			printf ("Se�ti�iniz ay�n mevsimi ilkbahar.");
			break;

		case 6 :
			printf ("Se�ti�iniz ay�n mevsimi yaz.");
			break;

		case 7 :
			printf ("Se�ti�iniz ay�n mevsimi yaz.");
			break;

		case 8 :
			printf("Se�ti�iniz ay�n mevsimi yaz.");
			break;

		case 9 :
			printf ("Se�ti�iniz ay�n mevsimi sonbahar.");
			break;

		case 10 :
			printf("Se�ti�iniz ay�n mevsimi sonbahar.");
			break;

		case 11 :
			printf("Se�ti�iniz ay�n mevsimi sonbahar.");
			break;

		case 12 :
			printf("Se�ti�iniz ay�n mevsimi sonbahar.");
			break;

		default :
			printf ("L�tfen 1-12 aras�nda bir de�er giriniz...");

	}

	return 0;
	}
