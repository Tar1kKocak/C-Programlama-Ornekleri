#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    //Yazilimin Amaci :Girilen bir sayý grubuna yeni bir sayýyý sýrasýný belirterek girmek ve yeni sayý grubunu ekrana bastýrmak.

    int adet,sayi[MAX_SIZE],sira,i,yenisayi;

    printf("Kac adet sayi gireceksiniz?\n");
    scanf("%d",&adet);

    for(i=0;i<adet;i++) {
        printf("Sayi giriniz.\n");
        scanf("%d",&sayi[i]);

    }
    for(i=0;i<adet;i++){
        printf("%d ",sayi[i]);
    }
    printf("\n");

    printf("Eklemek istediginiz sayi kactir?\n");
    scanf("%d",&yenisayi);
    a:
    printf("Hangi siraya koymak istersiniz.\n");
    scanf("%d",&sira);

    if (sira>adet+1 || sira<=0) {

        printf("Lutfen 1 ile %d arasinda bir deger giriniz.\n",adet);
        goto a;
    }
    else {
        for (i=adet;i>=sira;i--){
            sayi[i]=sayi[i-1];
        }
        sayi[sira-1] = yenisayi;
        adet++;

    }
    printf("Yeni sira : \n");
    for (i=0;i<adet;i++) {
        printf("%d ",sayi[i]);

    }



    return 0;
}
