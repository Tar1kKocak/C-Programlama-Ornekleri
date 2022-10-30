#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    //Yazilimin amaci : Girilen sayı adeti kadar satır inerek sekil olusturma.
    
    setlocale (LC_ALL,"Turkish");

    int sayi,satir,sutun;

    printf("Lütfen bir sayý giriniz.\n");
    scanf("%d",&sayi);


    for (satir=1;satir<=sayi;satir++) {
        for (sutun=1;sutun<=satir;sutun++){
            printf("*");

        }
        printf("\n");



    }
        for (satir=1;satir<=sayi;satir++) {

            for (sutun=sayi-satir;sutun>=0;sutun--){
                    printf("*");

        }
            printf("\n");
        }

    return 0;
}
