#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    //Yazilimin Amaci : Girilen sayilar icerisinde kac adet tek-cift sayi oldugunu bulmak.

    int kontroltek=0,kontrolcift=0,sayi[MAX_SIZE],adet,i;

    printf("Kac adet sayi gireceksiniz?\n");
    scanf("%d",&adet);

    for(i=0;i<adet;i++) {

        printf("Sayi giriniz.\n");
        scanf("%d",&sayi[i]);

    }
    for (i=0;i<adet;i++) {

        if(sayi[i]%2==0) {
            kontrolcift++;
        }
        else if(sayi[i]%2!=0) {
            kontroltek++;
        }

    }

    printf("%d adet tek sayi var.\n%d adet cift sayi var ",kontroltek,kontrolcift);



    return 0;
}
