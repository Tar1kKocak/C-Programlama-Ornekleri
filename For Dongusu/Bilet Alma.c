#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL,"Turkish");

    int biletsayisi=100;
    char secim;

    for(;biletsayisi>0;) {

            printf("Bilet almak istiyorsanýz belirtiniz.[E/e]\n");
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

            printf("Alýnabilecek toplam bilet sayýsý :%d\n",biletsayisi);


        }
        else {
            break;
        }
    }

        if(biletsayisi==0) {
            printf("Biletler tükendi.\n");

        }
        else {
                printf("Alýnan bilet sayýsý : %d\nKalan bilet sayýsý : %d",100-biletsayisi,biletsayisi);

        }

    exit:
    return 0;
}
