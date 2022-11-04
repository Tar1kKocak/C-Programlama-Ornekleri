#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100


int main()
{
    //Yazilimin Amaci : Girilen iki adet mesaji birlestirmek.

    char mesaj1[MAX_SIZE],mesaj2[MAX_SIZE];
    int toplam=0,i,j;

    printf("Lutfen mesajinizi giriniz:\n");
    gets(mesaj1);
    printf("Lutfen mesajinizi giriniz:\n");
    gets(mesaj2);

        i=0;
        while (mesaj1[i]!='\0') {
            i++;
        }

        j=0;
        while(mesaj2[j]!='\0') {
                mesaj1[i] = mesaj2[j];
            j++;
            i++;
        }


        printf("Birlestirilmis hali : %s",mesaj1);




    return 0;
}
