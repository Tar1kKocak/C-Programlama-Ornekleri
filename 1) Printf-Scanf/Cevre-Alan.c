#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



    int main()
 {
     //Yazilimin Amaci : Kare ve dikdortgenin çevre,alan hesabını yapabilmek.

 	setlocale(LC_ALL,"Turkish");
 	int kareninbiruzunluk;

 	printf("Alanini ve cevresini bulmak istediginiz karenin bir kenar uzunlugunu belirtiniz...\n");
 	scanf("%d",&kareninbiruzunluk);

 	int dikdortgenkisakenar,dikdortgenuzunkenar;

 	printf("Alanini ve cevresini bulmak istediginiz dikdörtgenin uzun kenarini giriniz.\n");
 	scanf("%d",&dikdortgenuzunkenar);

 	printf("Alanini ve cevresini bulmak istediginiz dikdörtgenin kisa  kenarini giriniz.\n");
 	scanf("%d",&dikdortgenkisakenar);


 	printf("Karenin cevresi : %d\n",kareninbiruzunluk * 4);
 	printf("Karenin alani : %d\n",kareninbiruzunluk * kareninbiruzunluk);
 	printf("Dikdörtgenin cevresi : %d\n",dikdortgenkisakenar * 2 + dikdortgenuzunkenar * 2);
 	printf("Dikdörtgenin alani : %d\n",dikdortgenkisakenar*dikdortgenuzunkenar);







	return 0;
}
