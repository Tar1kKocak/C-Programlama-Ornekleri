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

printf ("L�tfen bir say� de�eri giriniz...\n");
scanf ("%d",&sayi);

printf ("L�tfen bir kesirli say� de�eri giriniz...\n");
scanf ("%f",&kesirlisayi);

printf ("L�tfen bir b�y�k kesirli say� de�eri giriniz...\n");
scanf ("%lf",&kesirlisayi2);

printf ("L�tfen bir karakter de�eri giriniz...\n");
scanf (" %c",&karakter);

printf ("L�tfen bir karakter dizisi de�eri giriniz...\n");
scanf ("%s",&karakterdizisi);



printf ("Girdi�iniz say� : %d\n",sayi);
printf ("Girdi�iniz kesirli say� : %.1f\n",kesirlisayi);
printf ("Girdi�iniz say� : %.1f\n",kesirlisayi2);
printf ("Girdi�iniz say� : %c\n",karakter);
printf ("Girdi�iniz say� : %s\n",karakterdizisi);

  return 0;
}
