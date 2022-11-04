#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    //Yazilimin Amaci : Bir dizideki toplam harf, rakam veya ozel karakter sayini bulmak.


    char mesaj[MAX_SIZE];
    int i,harfadet=0,rakamadet=0,ozeladet=0;

    printf("Lutfen mesajinizi giriniz.\n");
    gets(mesaj);

    for(i=0;mesaj[i]!='\0';i++) {

        if (mesaj[i]>='a' && mesaj[i]<='z' || mesaj[i]>='A' && mesaj[i]<='Z') {

            harfadet++;

        }
        else if (mesaj[i]>='0' && mesaj[i]<='9') {

            rakamadet++;
        }
        else {
            ozeladet++;
        }
    }

    printf("Harf adediniz : %d\n",harfadet);
    printf("Rakam adediniz : %d\n",rakamadet);
    printf("Ozel karakter adediniz : %d\n",ozeladet);





    return 0;
}
