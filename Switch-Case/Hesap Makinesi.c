#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
 {
     // Yazilimin Amaci : Sonsuz defa islem yapabilmeyi saglayan hesap makinesi

	setlocale(LC_ALL,"Turkish");

	int islemno;
	float sayi1,sayi2;

menu:	printf ("L�tfen yapmak istedi�iniz i�lemi se�iniz.\n");
	printf ("1.Toplama\n2.��karma\n3.�arpma\n4.B�lme\n5.Karek�k\n6.Kuvvet\n");
	printf("L�tfen ��kmak i�in -1 de�erini giriniz..\n");
	scanf ("%d",&islemno);

	if (islemno == -1) {
		goto cikis;
	}

	printf ("��lem yapmak istedi�iniz iki say�y� giriniz.(�nce b�y�k say�)\n");
	scanf ("%f%f",&sayi1,&sayi2);


	switch (islemno) {

		case 1 : printf ("%.2f say�s� ile %.2f say�s�n�n toplam� = %.2f",sayi1,sayi2,sayi1+sayi2); goto menu; break;
		case 2 : printf ("%.2f say�s�ndan %.2f say�s�n� ��kart�rsak = %.2f",sayi1,sayi2,sayi1-sayi2); goto menu; break;
		case 3 : printf ("%.2f say�s�n�n %.2f say�s� ile �arp�m� = %.2f",sayi1,sayi2,sayi1*sayi2); goto menu; break;
		case 4 : printf ("%.2f say�s�n�n %.2f ile b�l�m� = %.2f",sayi1,sayi2,sayi1/sayi2); goto menu; break;
		case 5 : printf ("%.2f say�s�n�n karek�k� = %.2f\n%.2f say�s�n�n karek�k� = %.2f",sayi1,sqrt(sayi1),sayi2,sqrt(sayi2)); goto menu; break;
		case 6 : printf ("%.1f �zeri %.1f =%.1f",sayi1,sayi2,pow(sayi1,sayi2)); goto menu; break;
		default : printf("L�tfen ge�erli bir say� giriniz...");

	}
	cikis:
	return 0;
	}
