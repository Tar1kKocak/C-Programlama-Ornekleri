#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    // Yazilimin amaci :  100 bilet ile sinirli bir etkinlik bilet satma/tuketme yazilimi.
    
    setlocale(LC_ALL,"Turkish");

    int biletsayisi=100;
    char secim;

    for(;biletsayisi>0;) {

            printf("Bilet almak istiyorsanız belirtiniz.[E/e]\n");
            scanf(" %c",&secim);

        if (secim=='e' || secim =='E') {

            int alinanbilet;

            printf("Kaç adet bilet almak istiyorsunuz?\n");
            scanf("%d",&alinanbilet);

            if (alinanbilet > biletsayisi) {
                printf("O kadar biletimiz yok.\n");
                goto exit;
            }

            biletsayisi -= alinanbilet;

            printf("Alınabilecek toplam bilet sayısı :%d\n",biletsayisi);


        }
        else {
            break;
        }
    }

        if(biletsayisi==0) {
            printf("Biletler tükendi.\n");

        }
        else {
                printf("Alınan bilet sayısı : %d\nKalan bilet sayısı : %d",100-biletsayisi,biletsayisi);

        }

    exit:
    return 0;
}
