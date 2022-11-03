#include <stdio.h>
#include <stdlib.h>

int main()
{

   int sayi,sutun=1,satir=1;

    printf("Lutfen bir sayi giriniz.\n");
    scanf("%d",&sayi);

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
