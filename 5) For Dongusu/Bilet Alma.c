#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    int biletsayisi=100;
    char secim;

    for(;biletsayisi>0;) {

            printf("Bilet almak istiyorsan�z belirtiniz.[E/e]\n");
            scanf(" %c",&secim);

        if (secim=='e' || secim =='E') {

            int alinanbilet;

            printf("Ka� adet bilet almak istiyorsunuz?\n");
            scanf("%d",&alinanbilet);

            if (alinanbilet > biletsayisi) {
                printf("O kadar biletimiz yok.\n");
                goto exit;
            }

            biletsayisi -= alinanbilet;

            printf("Al�nabilecek toplam bilet say�s� :%d\n",biletsayisi);


        }
        else {
            break;
        }
    }

        if(biletsayisi==0) {
            printf("Biletler t�kendi.\n");

        }
        else {
                printf("Al�nan bilet say�s� : %d\nKalan bilet say�s� : %d",100-biletsayisi,biletsayisi);

        }

    exit:
    return 0;
}
