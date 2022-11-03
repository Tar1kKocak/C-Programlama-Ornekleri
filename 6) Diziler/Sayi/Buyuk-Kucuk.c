#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    //Yazilimin Amaci : Girilen sayilar arasindan en kucuk ve en buyuk sayiyi bulmak.

    int sayi[MAX_SIZE];
    int min,max,i,adet;

    printf("Kac adet sayi gireceksiniz?\n");
    scanf("%d",&adet);

    for(i=0;i<adet;i++) {

        printf("Lutfen bir sayi giriniz.\n");
        scanf("%d",&sayi[i]);
    }

    max=sayi[0];
    min=sayi[0];

    for (i=1;i<adet;i++) {


        if (sayi[i]>max) {
            max = sayi[i];
        }
        if (sayi[i]<min) {
            min = sayi[i];

        }


    }
    printf("Max Sayiniz : %d\nMin Sayiniz : %d",max,min);



    return 0;
}
