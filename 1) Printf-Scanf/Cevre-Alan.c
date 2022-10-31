#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



    int main()
 {
     //Yazilimin Amaci : Kare ve dikdortgenin çevre,alan hesabını yapabilmek.
     //Software Goal   : Calculating perimeter and area of square and rectangle.

 	setlocale(LC_ALL,"Turkish");
 	int kareninbiruzunluk;

 	printf("Alanini ve cevresini bulmak istediginiz karenin bir kenar uzunlugunu belirtiniz...\n");
 	scanf("%d",&kareninbiruzunluk);

 	int dikdortgenkisakenar,dikdortgenuzunkenar;

 	printf("Alanini ve cevresini bulmak istediginiz dikdortgenin uzun kenarini giriniz.\n");
 	scanf("%d",&dikdortgenuzunkenar);

 	printf("Alanini ve cevresini bulmak istediginiz dikdortgenin kisa  kenarini giriniz.\n");
 	scanf("%d",&dikdortgenkisakenar);


 	printf("Karenin cevresi : %d\n",kareninbiruzunluk * 4);
 	printf("Karenin alani : %d\n",kareninbiruzunluk * kareninbiruzunluk);
 	printf("Dikdortgenin cevresi : %d\n",dikdortgenkisakenar * 2 + dikdortgenuzunkenar * 2);
 	printf("Dikdortgenin alani : %d\n",dikdortgenkisakenar*dikdortgenuzunkenar);







	return 0;
}
