#include <stdio.h>
#include <stdlib.h>

//Yazilimin Amaci : Fonksiyon ile Hesap Makinesi

void toplama(int sayi1,int sayi2){
    printf("Toplam Sonucu : %d",sayi1+sayi2);
}
void cikarma (int sayi1,int sayi2){
    printf("Toplam Sonucu : %d",sayi1-sayi2);
}
void carpma(int sayi1,int sayi2){
    printf("Carpma Sonucu : %d",sayi1*sayi2);
}
void bolme(int sayi1,int sayi2){
    printf("Bolme Islemýnden Bolum:  %d\n",sayi1/sayi2);
    printf("Bolme Isleminden Kalan : %d",sayi1%sayi2);
}




int main()
{
int islemno,sayi1,sayi2;
    a:
    printf("Islem numaranizi belirtiniz.\n");
    printf("1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme\n");
    scanf("%d",&islemno);

    if (islemno==1){
            printf("Lutfen sirasiyla iki adet sayi giriniz.\n");
            scanf("%d%d",&sayi1,&sayi2);
            toplama(sayi1,sayi2);
    }
    else if (islemno==2){
            printf("Lutfen once buyuk sayi olmak uzere sirasiyla iki adet sayi giriniz.");
            scanf("%d%d",&sayi1,&sayi2);
            cikarma(sayi1,sayi2);

    }
    else if (islemno==3) {
            printf("Lutfen sirasiyla iki adet sayi giriniz.\n");
            scanf("%d%d",&sayi1,&sayi2);
            carpma(sayi1,sayi2);

    }
    else if (islemno==4) {
            printf("Lutfen once boluneni sonra boleni giriniz ve bolumunu soyleyelim.\n");
            scanf("%d%d",&sayi1,&sayi2);
            bolme(sayi1,sayi2);


    }
    else {
        printf("Gecerli bir sayi girmediniz.");
        goto a;

    }
    return 0;
}
