#include <stdio.h>
#include <stdlib.h>

//Yazilimin Amaci : Pointer ve Structs ile Hesap Makinesi

struct sayilar{

 int buyuksayi;
 int kucuksayi;
 float kucukkesirlisayi;
 float buyukkesirlisayi;

};

int main()
{
    struct sayilar a2;
    struct sayilar *a1 = &a2;

    printf("Bir adet buyuk tam sayi giriniz:");
    scanf("%d",&a2.buyuksayi);
    printf("Bir adet kucuk tam sayi giriniz:");
    scanf("%d",&a2.kucuksayi);
    printf("Bir adet kucuk kesirli sayi giriniz:");
    scanf("%f",&a2.kucukkesirlisayi);
    printf("Bir adet buyuk kesirli sayi giriniz:");
    scanf("%f",&a2.buyukkesirlisayi);

      //  struct calisanlar *calisan1adres = &calisan1;




    int islemtur;
    int sayicesitleri;
    int toplamatur,cikarmatur,carpmatur,bolmetur;
    int toplam=0;
    printf("Yapmak istediginiz islem turunu seciniz.\n");
    printf("1-Toplama\n2-Cikarma\n3-Carpma\n4-Bolme");
    scanf("%d",&islemtur);

           switch (islemtur){

               case 1: printf("Yapmak istediginiz Toplama Cesitlerini Seciniz.\n");
                       printf("1-)Iki Tam Sayi\n2-)Iki Kesirli Sayi\n3-)Buyuk Tam ve Kucuk Kesirli Sayi\n4-)Kucuk Tam ve Buyuk Kesirli Sayi");
                       scanf("%d",&toplamatur);

                            switch (toplamatur) {

                            case 1:printf("Toplama Sonucunuz : %d",((*a1).buyuksayi) + ((*a1).kucuksayi)); break;
                            case 2:printf("Toplama Sonucunuz : %f",((*a1).kucukkesirlisayi) + ((*a1).buyukkesirlisayi)); break;
                            case 3:printf("Toplama Sonucunuz : %f",((*a1).buyuksayi) + ((*a1).kucukkesirlisayi) ); break;
                            case 4:printf("Toplama Sonucunuz : %f",((*a1).kucuksayi) + ((*a1).buyukkesirlisayi) ); break;
                            default :printf("Gecersiz Secim"); break;

                            }
                                break;

               case 2: printf("Yapmak istediginiz Cikarma Cesitlerini Seciniz.\n");
                        printf("1-)Iki Tam Sayi\n2-)Iki Kesirli Sayi\n3-)Buyuk Tam ve Kucuk Kesirli Sayi\n4-)Kucuk Tam ve Buyuk Kesirli Sayi");
                        scanf("%d",&cikarmatur);
                        switch (cikarmatur) {

                            case 1:printf("Cikarma Sonucunuz : %d",((*a1).buyuksayi) - ((*a1).kucuksayi)); break;
                            case 2:printf("Cikarma Sonucunuz : %f",((*a1).kucukkesirlisayi) - ((*a1).buyukkesirlisayi)); break;
                            case 3:printf("Cikarma Sonucunuz : %f",((*a1).buyuksayi) - ((*a1).kucukkesirlisayi) ); break;
                            case 4:printf("Cikarma Sonucunuz : %f",((*a1).kucuksayi) - ((*a1).buyukkesirlisayi) ); break;
                            default :printf("Gecersiz Secim"); break;

                            }
                        break;

               case 3: printf("Yapmak istediginiz Carpma Cesitlerini Seciniz.\n");
                        printf("1-)Iki Tam Sayi\n2-)Iki Kesirli Sayi\n3-)Buyuk Tam ve Kucuk Kesirli Sayi\n4-)Kucuk Tam ve Buyuk Kesirli Sayi");
                        scanf("%d",&carpmatur);
                        switch (carpmatur) {

                            case 1:printf("Carpma Sonucunuz : %d",((*a1).buyuksayi) * ((*a1).kucuksayi)); break;
                            case 2:printf("Carpma Sonucunuz : %f",((*a1).kucukkesirlisayi) * ((*a1).buyukkesirlisayi)); break;
                            case 3:printf("Carpma Sonucunuz : %f",((*a1).buyuksayi) * ((*a1).kucukkesirlisayi) ); break;
                            case 4:printf("Carpma Sonucunuz : %f",((*a1).kucuksayi) * ((*a1).buyukkesirlisayi) ); break;
                            default :printf("Gecersiz Secim"); break;

                            }

                                break;
               case 4: printf("Yapmak istediginiz Bolme Cesitlerini Seciniz.\n");
                        printf("1-)Iki Tam Sayi\n2-)Iki Kesirli Sayi\n3-)Buyuk Tam ve Kucuk Kesirli Sayi\n4-)Kucuk Tam ve Buyuk Kesirli Sayi");
                        scanf("%d",&bolmetur);
                        switch (bolmetur) {

                            case 1:printf("Bolme Sonucunuz : %d",((*a1).buyuksayi) / ((*a1).kucuksayi)); break;
                            case 2:printf("Bolme Sonucunuz : %f",((*a1).kucukkesirlisayi) / ((*a1).buyukkesirlisayi)); break;
                            case 3:printf("Bolme Sonucunuz : %f",((*a1).buyuksayi) / ((*a1).kucukkesirlisayi) ); break;
                            case 4:printf("Bolme Sonucunuz : %f",((*a1).kucuksayi) / ((*a1).buyukkesirlisayi) ); break;
                            default :printf("Gecersiz Secim"); break;

                            }

                            break;

               default : printf("Gecersiz bir sayi girdiniz tekrardan sayilari girer misiniz.\n"); break;
           }

    return 0;
}

