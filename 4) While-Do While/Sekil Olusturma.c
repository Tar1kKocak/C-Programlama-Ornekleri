#include <stdio.h>
#include <stdlib.h>


int main()
{
    //Yazilimin amaci : Girilen sayı adeti kadar satır inerek sekil olusturma.


    int sayi,sutun=1,satir=1;

    printf("Lutfen bir sayi giriniz.\n");
    scanf("%d",&sayi);


    while (satir<=sayi) {


            while (sutun<=satir) {

                printf("*");

                sutun++;
            }

        printf("\n");

        satir++;
        sutun=1;

    }
        sutun = sayi - 1;
        satir=1;
     while(satir<=sayi){


        while(sutun>=0) {
            printf("*");
            sutun--;

        }
        printf("\n");
        satir++;
        sutun=sayi-satir;
    }


    return 0;
}
