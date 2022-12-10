#include <stdio.h>
#include <stdlib.h>

//Yazilimin Amaci : Structs ile eleman bilgilerini alýp,gostermek.

struct calisanlar{

    char isim[10];
    char soyisim[10];
    char rutbe[30];
    char cinsiyet[10];
    int deneyim;
    int dogumyil;

};

int main()
{

    struct calisanlar calisan1;
    printf ("Calisanin isim,soyisim,rutbe,cinsiyet,deneyim yili ve dogum yilini sirasiyla giriniz.\n");
    scanf("%s %s %s %s %d %d",calisan1.isim,calisan1.soyisim,calisan1.rutbe,calisan1.cinsiyet,&calisan1.deneyim,&calisan1.dogumyil);

    struct calisanlar *calisan1adres = &calisan1;

    printf("Calisan Bilgiler:\n");

    printf("Isim : %s\n",(*calisan1adres).isim);
    printf("Soyisim : %s\n",(*calisan1adres).soyisim);
    printf("Rutbe : %s\n",(*calisan1adres).rutbe);
    printf("Cinsiyet : %s\n",(*calisan1adres).cinsiyet);
    printf("Deneyim Suresi %d yil\n",(*calisan1adres).deneyim);
    printf("Dogum Yil : %d\n",(*calisan1adres).dogumyil);





    return 0;
}
