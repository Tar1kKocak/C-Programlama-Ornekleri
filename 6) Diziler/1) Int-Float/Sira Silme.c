#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    // Yazilimin Amaci :Girilen sýrali sayidan sayi silmek.


    int sayi[MAX_SIZE],i,adet,cikartilansira;

    printf("Kac adet sayi gireceksiniz?\n");
    scanf("%d",&adet);

    for(i=0;i<adet;i++) {
        printf("Sayiyi giriniz.\n");
        scanf("%d",&sayi[i]);
    }
    for(i=0;i<adet;i++) {
        printf("%d ",sayi[i]);
    }
        printf("\n");
    printf("Cikarmak istediginiz sayinin sira numarasini giriniz.");
    scanf("%d",&cikartilansira);

    for(i=cikartilansira-1;i<adet-1;i++) {

        sayi[i]=sayi[i+1];

    }
        adet--;
    for(i=0;i<adet;i++) {
        printf("%d ",sayi[i]);

    }




    return 0;
}
