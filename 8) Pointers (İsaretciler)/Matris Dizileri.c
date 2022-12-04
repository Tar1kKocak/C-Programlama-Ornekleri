#include <stdio.h>
#include <stdlib.h>

//Yazilimin Amaci : Karakter Dizileriyle Pointer


int main()
{
    /*
    char *isimler[]= {"EFSA","TARIK","ELIF","BATU"};

    for (int i=0;isimler[i]!='\0';i++) {
        printf("%s\n",*(isimler+i));
    }
*/

    char ulkeler[5][20];

    for(int i=0;i<5;i++) {
        printf("%d.ulkeyi giriniz.\n",i+1);
        scanf("%s",&ulkeler[i]);

    }
    for (int i=0;i<5;i++) {
        printf("%s\n",ulkeler[i]);
    }

    char *ulkelerinadres[5];

    for (int i=0;i<5;i++){
        ulkelerinadres[i] = &ulkeler[i];
    }
    for (int i=0;i<5;i++){
        printf("%s",*(ulkelerinadres+i));
    }

    return 0;
}
