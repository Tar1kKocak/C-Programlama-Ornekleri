#include <stdio.h>
#include <stdlib.h>

//Yazilimin Amaci : Calloc Kullanimi

int main()
{
    int *sayidizisi = calloc(10,sizeof(int));

    sayidizisi[0]=5;
    sayidizisi[1]=15;
    sayidizisi[2]=25;
    sayidizisi[3]=35;

    int toplam=0,i;
    for(i=0;i<4;i++){
        toplam+=sayidizisi[i];
    }

    printf("Toplam : %d",toplam);


    return 0;
}
