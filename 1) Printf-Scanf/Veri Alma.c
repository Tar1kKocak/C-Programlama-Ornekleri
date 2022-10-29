#include <stdio.h>
#include <locale.h>

int main()
{
    //Yazilimin amaci : Kullanicidan alinan degerleri ekrana yazdirmak.

  setlocale(LC_ALL, "Turkish");

int sayi;
float kesirlisayi;
double kesirlisayi2;
char karakter;
char karakterdizisi[6];

printf ("Lütfen bir sayý deðeri giriniz...\n");
scanf ("%d",&sayi);

printf ("Lütfen bir kesirli sayý deðeri giriniz...\n");
scanf ("%f",&kesirlisayi);

printf ("Lütfen bir büyük kesirli sayý deðeri giriniz...\n");
scanf ("%lf",&kesirlisayi2);

printf ("Lütfen bir karakter deðeri giriniz...\n");
scanf (" %c",&karakter);

printf ("Lütfen bir karakter dizisi deðeri giriniz...\n");
scanf ("%s",&karakterdizisi);



printf ("Girdiðiniz sayý : %d\n",sayi);
printf ("Girdiðiniz kesirli sayý : %.1f\n",kesirlisayi);
printf ("Girdiðiniz sayý : %.1f\n",kesirlisayi2);
printf ("Girdiðiniz sayý : %c\n",karakter);
printf ("Girdiðiniz sayý : %s\n",karakterdizisi);

  return 0;
}
