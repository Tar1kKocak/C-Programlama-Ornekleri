#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Yazilimin amaci : 1'den 5'e kadar olan sayilarin karesini dogru veya yanlis bulmak.

    int sayac,sayi1;
    int dogru=0,yanlis=0;

    for (sayac=1;sayac<=5;sayac++) {
            printf("%d sayisinin karesi kactir?\n",sayac);
            scanf("%d",&sayi1);

        if (sayac*sayac==sayi1) {
            dogru++;
        }
        else if (sayac*sayac!=sayi1) {
            yanlis++;
        }


    }

    printf("%d dogrunuz,%d yanlisiniz vardir.",dogru,yanlis);











    return 0;
}
