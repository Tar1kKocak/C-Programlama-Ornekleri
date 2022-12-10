#include <stdio.h>
#include <stdlib.h>

//Yazilimin Amaci : Mini kitap satis ornek

struct kitap{

    char isim[30];
    char yazarisim[30];
    int basimyili;
    float fiyat;

}RomanKitaplari[2]={{"Suc ve Ceza","Dostoyevski",1960,35.75},{"Tarik ve Efsa","Efsa",2022,35.25}};

int main()
{
    int i;
    float toplam=0;
    for(i=0;i<2;i++){
        printf("Romanin ismi : %s\nRomanin yazari : %s\nBasim yili : %d\nFiyat : %.2f\n",RomanKitaplari[i].isim,RomanKitaplari[i].yazarisim,RomanKitaplari[i].basimyili,RomanKitaplari[i].fiyat);
    }
    for(i=0;i<2;i++){
        toplam+=RomanKitaplari[i].fiyat;
    }
    printf("Iki kitabin toplam ucreti : %.2f",toplam);

    return 0;
}
