#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



    int main()
 {
     //Yazilimin Amaci : Kare ve dikdortgenin çevre,alan hesabını yapabilmek.

 	setlocale(LC_ALL,"Turkish");
 	int kareninbiruzunluk;

 	printf("Alanýný ve çevresini bulmak istediðiniz karenin bir kenar uzunluðunu belirtiniz...\n");
 	scanf("%d",&kareninbiruzunluk);

 	int dikdortgenkisakenar,dikdortgenuzunkenar;

 	printf("Alanýný ve çevresini bulmak istediðiniz dikdörtgenin uzun kenarýný giriniz.\n");
 	scanf("%d",&dikdortgenuzunkenar);

 	printf("Alanýný ve çevresini bulmak istediðiniz dikdörtgenin kýsa kenarýný giriniz.\n");
 	scanf("%d",&dikdortgenkisakenar);


 	printf("Karenin çevresi : %d\n",kareninbiruzunluk * 4);
 	printf("Karenin alaný : %d\n",kareninbiruzunluk * kareninbiruzunluk);
 	printf("Dikdörtgenin çevresi : %d\n",dikdortgenkisakenar * 2 + dikdortgenuzunkenar * 2);
 	printf("Dikdörtgenin alaný : %d\n",dikdortgenkisakenar*dikdortgenuzunkenar);







	return 0;
}
