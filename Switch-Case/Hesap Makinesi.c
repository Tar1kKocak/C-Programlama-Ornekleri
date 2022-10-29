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

menu:	printf ("Lütfen yapmak istediðiniz iþlemi seçiniz.\n");
	printf ("1.Toplama\n2.Çýkarma\n3.Çarpma\n4.Bölme\n5.Karekök\n6.Kuvvet\n");
	printf("Lütfen çýkmak için -1 deðerini giriniz..\n");
	scanf ("%d",&islemno);

	if (islemno == -1) {
		goto cikis;
	}

	printf ("Ýþlem yapmak istediðiniz iki sayýyý giriniz.(Önce büyük sayý)\n");
	scanf ("%f%f",&sayi1,&sayi2);


	switch (islemno) {

		case 1 : printf ("%.2f sayýsý ile %.2f sayýsýnýn toplamý = %.2f",sayi1,sayi2,sayi1+sayi2); goto menu; break;
		case 2 : printf ("%.2f sayýsýndan %.2f sayýsýný çýkartýrsak = %.2f",sayi1,sayi2,sayi1-sayi2); goto menu; break;
		case 3 : printf ("%.2f sayýsýnýn %.2f sayýsý ile çarpýmý = %.2f",sayi1,sayi2,sayi1*sayi2); goto menu; break;
		case 4 : printf ("%.2f sayýsýnýn %.2f ile bölümü = %.2f",sayi1,sayi2,sayi1/sayi2); goto menu; break;
		case 5 : printf ("%.2f sayýsýnýn karekökü = %.2f\n%.2f sayýsýnýn karekökü = %.2f",sayi1,sqrt(sayi1),sayi2,sqrt(sayi2)); goto menu; break;
		case 6 : printf ("%.1f üzeri %.1f =%.1f",sayi1,sayi2,pow(sayi1,sayi2)); goto menu; break;
		default : printf("Lütfen geçerli bir sayý giriniz...");

	}
	cikis:
	return 0;
	}
