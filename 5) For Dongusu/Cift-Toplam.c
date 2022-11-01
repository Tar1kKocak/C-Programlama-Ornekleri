#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Yazilimin Amaci : 1 ile n arasindaki tüm cift sayilarin toplamini bulan bir C programi yazin.

    int sayi;
    int i;
    int sonuc=0;

    printf("Lutfen bir sayi giriniz.\n");
    scanf("%d",&sayi);

    for (i=1;i<=sayi;i++) {

        if (i%2==0) {
            sonuc +=i;
        }

    }

    printf("Toplam : %d",sonuc);









    return 0;
}
