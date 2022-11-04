#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    //Yazilimin Amaci : Girilen mesajda kac adet sesli ve sessiz harf oldugunu bulmak.

    char mesaj[MAX_SIZE];
    int sesliharf=0,sessizharf=0,i;

    printf("Lutfen mesajinizi giriniz.\n");
    gets(mesaj);

    for(i=0;mesaj[i]!='\0';i++) {

        if (mesaj[i]>='a' && mesaj[i]<='z' || mesaj[i]>='A' && mesaj[i]<='Z') {

            if(mesaj[i]=='a' || mesaj[i]=='A' ||mesaj[i]=='e' || mesaj[i]=='E' || mesaj[i]=='i' ||
               mesaj[i]=='I' || mesaj[i]=='o' || mesaj[i]=='O' || mesaj[i]=='u' || mesaj[i]=='U') {

                sesliharf++;

        }
            else  {
                sessizharf++;
            }


    }

    }

    printf("Toplam sesli harfiniz : %d\n",sesliharf);
    printf("Toplam sessiz harfiniz : %d",sessizharf);



    return 0;
}
