#include <stdio.h>
#include <stdlib.h>

    //Yazilimin Amaci : Fonksiyonlarýn kabaca mantigini anlamak.

void takimlar() {

    printf("Galatasaray\n");
    printf("Fenerbahce\n");
    printf("Besiktas\n");
    printf("Trabzonspor\n");
}

int sayininikikati(int sayi) {

    printf("%d",sayi*2);
    return sayi*2;
}

float karekokal(int sayi) {


    return sqrt(sayi);
}


int main()
{

    takimlar();

    printf("%d",sayininikikati(5));
    sayininikikati(5);

    printf("%.2f",karekokal(9));





    return 0;
}
