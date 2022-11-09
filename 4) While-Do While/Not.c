#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Yazilimin Amaci : Girilen ogrenci sayisi ve notlarina gore en kucuk, en buyuk ve sinifin ortalama notunu bulmak.

    int ogrencisayi,buyuk=0,kucuk=100,i;
    float ogrencinot,toplam=0,ort;

    printf("Sinifta kac ogrenci vardir?\n");
    scanf("%d",&ogrencisayi);

    i=ogrencisayi;
    while (i>0) {

        printf("%d. ogrencinin notunu giriniz:",i);
        scanf("%f",&ogrencinot);


        toplam=ogrencinot+toplam;




            if (ogrencinot>buyuk) {
                    buyuk=ogrencinot;
            }
            if (ogrencinot<kucuk) {
                kucuk=ogrencinot;
            }







        i--;
    }
    printf("Ortalama not: %.2f\n", toplam/ogrencisayi);
	printf("En buyuk not: %d\n", buyuk);
	printf("En kucuk not: %d\n", kucuk);







    return 0;
}
