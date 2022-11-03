#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    //Yazilimin Amaci : Girilen sayilar icinde kac adet negatif sayi oldugunu bulmak.

    int adet,sayi[MAX_SIZE],negkontrol=0,i;

    printf("Kac adet sayi gireceksiniz.\n");
    scanf("%d",&adet);

    for (i=0;i<adet;i++) {
        printf("Sayi giriniz.\n");
        scanf("%d",&sayi[i]);

    }
    for (i=0;i<adet;i++) {


        if(sayi[i]<0) {
            negkontrol++;
        }



    }

    printf("%d adet negatif sayi var.",negkontrol);


    return 0;
}
