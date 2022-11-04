#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
        //Yazilimin Amaci : Girilen mesajin kac karakterden olustugunu bulmak.

    char mesaj[MAX_SIZE];
    int toplam=0,i;

    printf("Lutfen mesajinizi giriniz.\n");
    gets(mesaj);

    for(i=0;mesaj[i]!='\0';i++)
    {
        toplam++;
    }

    printf("Toplamda %d karakter kullanildi.",toplam);






    return 0;
}
