#include <stdio.h>
#include <stdlib.h>

int main()
{

 int sayac=1,sayi;
 int dogru=0,yanlis=0;



    while (sayac<6) {


        printf("%d sayisinin karesini giriniz.\n",sayac);
        scanf("%d",&sayi);


        if (sayac*sayac==sayi) {
            dogru++;
        }
        else if (sayi != sayac*sayac) {
            yanlis++;
        }

  sayac++;

    }

    printf("%d dogru %d yanlis",dogru,yanlis);

    return 0;
}
