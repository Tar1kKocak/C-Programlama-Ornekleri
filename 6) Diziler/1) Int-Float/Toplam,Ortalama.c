#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    //Yazilimin Amaci : Girilen sayilarin toplamini ve ortalamasini bulma.

    float sayi[MAX_SIZE],toplam=0;
    int adet,i;

    printf("Kac adet sayi gireceksiniz.\n");
    scanf("%d",&adet);

    for(i=0;i<adet;i++) {
        printf("Sayiyi giriniz.\n");
        scanf("%f",&sayi[i]);
    }

    for(i=0;i<adet;i++) {

        toplam+=sayi[i];

    }



    printf("Toplam : %.2f\n",toplam);
    printf("Ortalama : %.3f",toplam/adet);




    return 0;
}
