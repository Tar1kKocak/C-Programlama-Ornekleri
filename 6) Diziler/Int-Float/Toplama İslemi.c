#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
        //Yazilimin Amaci : Girilen sayilarin toplamini bulmak.

    int sayi[MAX_SIZE];
    int adet,i,toplam=0;

    printf("Kac adet sayi gireceksiniz?\n");
    scanf("%d",&adet);

    for (i=0;i<adet;i++) {

        printf("Lutfen sayi giriniz.\n");
        scanf("%d",&sayi[i]);
    }

    for (i=0;i<adet;i++) {

        toplam=toplam+sayi[i];
    }

    printf("Toplam : %d",toplam);






    return 0;
}
