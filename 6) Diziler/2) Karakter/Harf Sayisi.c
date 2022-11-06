#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    //Yazilimin Amaci : Girilen metinde girilen harften kac adet oldgunu bulmak.

    char metin[MAX_SIZE],harf;
    int i,harfkontrol=0;

    printf("Lutfen metni giriniz.\n");
    gets(metin);
    printf("Aramak istediginiz harfi belirtiniz.\n");
    scanf("%c",&harf);

    for(i=0;metin[i]!='\0';i++) {

        if(metin[i]==harf) {
            harfkontrol++;
        }

    }

    printf("%d",harfkontrol);







    return 0;
}
