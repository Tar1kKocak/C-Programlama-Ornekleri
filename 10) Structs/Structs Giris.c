#include <stdio.h>
#include <stdlib.h>

    //Yazilimin Amaci : Struct Giris.

struct ogrenci{

        char isim[30];
        char soyisim[30];
        char okul[30];
        char bolum[30];
        int okulno;
        int sinif;


    }ogr1;

int main()
{

    strcpy(ogr1.isim,"Tarik");
    printf("Ogrencinin Adi :%s\n",ogr1.isim);

    strcpy(ogr1.soyisim,"Kocak");
    printf("Ogrencinin Soyismi :%s\n",ogr1.soyisim);

    ogr1.okulno = 2204020;
    printf("Ogrencinin Okul Numarasi :%d\n",ogr1.okulno);





    return 0;
}
