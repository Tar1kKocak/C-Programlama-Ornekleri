#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

//Yazilimin Amaci : Girilen metindeki harf adedini bulma

int uzunlukhesapla(char *karakterdizisiadresi){
    int uzunluk=0;
    int i,a=0;

    for (i=0;karakterdizisiadresi[i]!='\0';i++){
            if(karakterdizisiadresi[i]==' ') continue;
            else uzunluk++;
    }

    return uzunluk;
}

int main()
{
    char karakterdizisi[MAX_SIZE];

    printf("Lutfen uzunlugunu ogrenmek istediginiz kelimeyi veya cumleyi giriniz.\n");
    gets(karakterdizisi);

    printf("%d",uzunlukhesapla(karakterdizisi));

    return 0;
}
