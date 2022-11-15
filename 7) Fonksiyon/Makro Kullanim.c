#include <stdio.h>
#include <stdlib.h>


    //Yazilimin Amaci : Makro Kullanimi.


#define enBuyukSayi(sayi1,sayi2) (sayi1>sayi2) ? sayi1 :sayi2

#define saatisoyle(karakter) (karakter=='E' || karakter=='e') ? __TIME__ : "Istemiyor"




int main()
{



    printf("%d\n",enBuyukSayi(9,6));



    char kullanicikarakter;

    printf("Saati ogrenmek ister misiniz?\n");
    scanf("%c",&kullanicikarakter);

    if (saatisoyle(kullanicikarakter)) {
        printf("%s",saatisoyle(kullanicikarakter));
    }
    else {
        printf("%s",saatisoyle(kullanicikarakter));
    }


    return 0;
}
