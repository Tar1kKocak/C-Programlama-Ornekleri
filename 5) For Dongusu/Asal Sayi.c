#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Yazilimin Amaci : Kullanicidan alinan  pozitif bir tam sayinin asal olup olmadigini bulmak.
    //Software Goal : To find whether a positive integer received from the user is a prime number or not.

    setlocale (LC_ALL,"Turkish");

    int sayi,asal,kontrol=0;

    printf("Iki adet pozitif tam sayi giriniz.\n");
    scanf("%d",&sayi);


    for(asal=2;asal<sayi;asal++) {

        if (sayi%asal==0) {
            kontrol = 1;
            break;
        }
    }

    if (kontrol == 0) {
        printf("%d Asal sayidir.",sayi);
    }
    else {
        printf("%d Asal degildir.",sayi);
    }

    return 0;
}
