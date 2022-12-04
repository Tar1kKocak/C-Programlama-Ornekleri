#include <stdio.h>
#include <stdlib.h>

    //Yazilimin Amaci : Pointers Konusuna Giris.

int main()
{
    /*
        int sayi;

        printf("Bir sayi giriniz.");
        scanf("%d",&sayi);


        int *sayininadresi;

        sayininadresi = &sayi;

        printf("%d %x\n",*sayininadresi,sayininadresi);
        printf("%d %x",sayi,&sayi);
    */
        int sayi=12,*sayininadres;
        float kesirlisayi=5.7,*kesirlisayiadres;
        double buyukkesirlisayi=7.8,*buyukkesirlisayiadres;
        char karakter='E',*karakteradres;


        printf("%d\n",sayi);
        printf("%f\n",kesirlisayi);
        printf("%lf\n",buyukkesirlisayi);
        printf("%c\n",karakter);

        sayininadres = &sayi;
        kesirlisayiadres = &kesirlisayi;
        buyukkesirlisayiadres = &buyukkesirlisayi;
        karakteradres = &karakter;

        printf("%x\n",sayininadres);
        printf("%x\n",kesirlisayiadres);
        printf("%x\n",buyukkesirlisayiadres);
        printf("%x\n",karakteradres);




    return 0;
}
