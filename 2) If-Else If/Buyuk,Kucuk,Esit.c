#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   /*Girilen iki sayinin birbirine esit mi,buyuk mu ,kucuk mu hangisi oldugunu bulunuz.*/


    setlocale (LC_ALL,"Turkish");

    int sayi1,sayi2;

    printf("Iki adet sayi giriniz.\n");
    scanf("%d%d",&sayi1,&sayi2);

    if (sayi1==sayi2) {

        printf("%d sayisi %d sayisina esittir.",sayi1,sayi2);
    }
    else if (sayi1>sayi2) {
        printf ("%d sayisi %d sayisindan buyuktur.",sayi1,sayi2);
    }
    else if (sayi1<sayi2) {
        printf("%d sayisi %d sayisindan kucuktur",sayi1,sayi2);
    }

    return 0;
}
