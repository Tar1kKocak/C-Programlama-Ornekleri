#include <stdio.h>
#include <stdlib.h>

//Yazilimin Amaci : Pointer ve fonksiyonlar ile hesap makinesi

float topla(int *sayi1,int *sayi2){
    return *sayi1+*sayi2;
}

float cikarma(int *sayi1,int *sayi2){
    return *sayi1-*sayi2;
}
float carpma(int *sayi1,int *sayi2){
    return *sayi1 * (*sayi2);
}
void bolme(int *sayi1,int *sayi2){
    printf("Bolum : %d\n",*sayi1/(*sayi2));
    printf("Kalan : %d",*sayi1%*sayi2);

}

int main()
{
    float sayi1,sayi2;
    int islemturu;

    a:

    printf("Islem turunuzu seciniz.\n");
    printf("1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\n");
    scanf("%d",&islemturu);


    if(islemturu==1){
        printf("Iki adet toplanacak sayiyi giriniz.\n");
        scanf("%d%d",&sayi1,&sayi2);
        printf("Toplama Sonucu : %.2f",topla(&sayi1,&sayi2));
    }

    else if(islemturu==2){
        printf("Cikartilacak sayilari giriniz.\n");
        scanf("%d%d",&sayi1,&sayi2);
        printf("Cikartma Sonucu : %.2f",cikarma(&sayi1,&sayi2));

    }
    else if (islemturu==3){
        printf("Carpilacak sayilari giriniz.\n");
        scanf("%d%d",&sayi1,&sayi2);
        printf("Carpim Sonucu : %.2f",carpma(&sayi1,&sayi2));
    }
    else if (islemturu==4){
        printf("Bolunen sayiyi giriniz.\n");
        scanf("%d",&sayi1);
        printf("Bolen sayiyi giriniz.\n");
        scanf("%d",&sayi2);

        bolme(&sayi1,&sayi2);

    }
    else {
        printf("Gecerli bir sayi giriniz.");
        goto a;
    }


    return 0;
}
