#include <stdio.h>
#include <stdlib.h>

int main()

{
    //Yazilimin Amaci : Girilen para degerine göre alisveris yapmak.

    float para;
    int secenek,adet;


    do {
        printf("Toplam ne kadar paraniz var:");
        scanf("%f",&para);

        while (para>=0) {

            printf("Ne almak istiyorsunuz? Urun kodu giriniz.\n");
            printf("1-Ekmek (3 TL), 2-Sut (15 TL), 3-Yumurta (60 TL), 4-Cikis: ");
            scanf("%d",&secenek);

        if (secenek==4) {
            break;
        }

        if (secenek>0 && secenek<5) {
            printf("Adet giriniz:");
            scanf("%d",&adet);
        }
        else {
            printf("Hatali kod.\n");
        }
            switch(secenek) {

                case 1:     if(para>=adet*3) {
                             printf("%d adet ekmek satin alindi. Kalan paraniz %.2f TL\n",adet,para-(adet*3));
                             para=para-(adet*3);
                        }
                            else {
                                printf("Bu satin alma icin yeterli paraniz yok. Kalan paraniz %.2f TL\n",para);
                            }   break;
                case 2 :
                            if(para>=adet*15) {
                             printf("%d adet sut satin alindi. Kalan paraniz %.2f TL\n",adet,para-(adet*15));
                             para=para-(adet*15);
                        }
                            else {
                                printf("Bu satin alma icin yeterli paraniz yok. Kalan paraniz %.2f TL\n",para);
                            }   break;
                case 3 :
                            if(para>=adet*60) {
                             printf("%d adet yumurta satin alindi. Kalan paraniz %.2f TL\n",adet,para-(adet*60));
                             para=para-(adet*60);
                        }
                            else {
                                printf("Bu satin alma icin yeterli paraniz yok. Kalan paraniz %.2f TL\n",para);
                            }   break;

                default : break;




            }



        }









    }while(secenek<4 && secenek>0);


    printf("Alisverisiniz sonrasi kalan paraniz %.2f, Yine bekleriz :)",para);












    return 0;
}
