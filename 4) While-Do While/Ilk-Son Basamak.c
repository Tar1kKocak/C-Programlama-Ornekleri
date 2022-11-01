#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Yazilimin Amaci : Bir sayinin ilk ve son rakamini bulan bir C programi yaziniz.

   int sayi,ilk;
   int i=0;
   int birler;

   printf("Lutfen bir sayi giriniz.\n");
   scanf("%d",&sayi);

    ilk=sayi;

    while (ilk >= 10) {
        ilk = ilk/10;
    }

    birler=sayi%10;

    printf("%Ilk Basamak : %d\nSon Basamak: %d\n",ilk,birler);
    printf("Toplamlari : %d",ilk+birler);
    return 0;
}
