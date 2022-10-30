#include <stdio.h>
#include <locale.h>

int main()
{
    //Yazilimin amaci : Kullanicidan alinan degerleri ekrana yazdirmak.
    //Yazilimin amaci.2 : Ayni zamanda degiskenlerin mantigini icermektedir.

  setlocale(LC_ALL, "Turkish");

int sayi;
float kesirlisayi;
double kesirlisayi2;
char karakter;
char karakterdizisi[6];

printf ("Lütfen bir sayı değeri giriniz...\n");
scanf ("%d",&sayi);

printf ("Lütfen bir kesirli sayı değeri giriniz...\n");
scanf ("%f",&kesirlisayi);

printf ("Lütfen bir büyük kesirli sayı değeri giriniz...\n");
scanf ("%lf",&kesirlisayi2);

printf ("Lütfen bir karakter değeri giriniz...\n");
scanf (" %c",&karakter);

printf ("Lütfen bir karakter dizisi değeri giriniz...\n");
scanf ("%s",&karakterdizisi);



printf ("Girdiğiniz sayı : %d\n",sayi);
printf ("Girdiğiniz kesirli sayı : %.1f\n",kesirlisayi);
printf ("Girdiğiniz sayı : %.1f\n",kesirlisayi2);
printf ("Girdiğiniz sayı : %c\n",karakter);
printf ("Girdiğiniz sayı : %s\n",karakterdizisi);

  return 0;
}
