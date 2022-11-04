#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    //Yazilimin Amaci : Kucuk harfle girilen mesajlari buyuk harfli mesaja cevirmek.

    char mesaj[MAX_SIZE];
    int i;

    printf("Lutfen mesajinizi giriniz.\n");
    gets(mesaj);

    for(i=0;mesaj[i]!='\0';i++) {


    if (mesaj[i]>='a' && mesaj[i]<='z')
        mesaj[i] = mesaj[i] - 32;


    }

    printf("%s",mesaj);


    return 0;
}
