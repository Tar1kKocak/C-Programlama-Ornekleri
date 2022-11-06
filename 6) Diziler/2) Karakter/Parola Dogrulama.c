#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    //Yazilimin Amaci : Parola dogrulama sistemi

    char parola[MAX_SIZE],paroladogrula[MAX_SIZE];
    int i,yanlis;

    while (1) {
            i=0;
            yanlis=0;
        printf("Parola giriniz.\n");
        scanf("%s",&parola);
        printf("Lutfen parolanizi tekrar giriniz.\n");
        scanf("%s",&paroladogrula);

        while( !(parola[i]=='\0' && paroladogrula[i]=='\0') ) {



                if (parola[i]!=paroladogrula[i]) {
                    printf("Sifreleriniz uyusmuyor lutfen birinci ve ikinci sifreleri ayni giriniz.\n");
                    yanlis=1;
                    break;
                }
                else {
                    i++;
                }

        }
            if (yanlis==0) {
            printf("Sifreleriniz uyusuyor.Kayit tamamlandi.\n");
            break;
        }



    }



    return 0;
}
