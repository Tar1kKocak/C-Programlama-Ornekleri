#include <stdio.h>
#include <stdlib.h>

//Yazilimin Amaci : Pointer ile yildiz bastirma


    void yildizbas(int *adet){

        for (int i=0;i<*adet;i++){
            printf(" * ");
        }

    }



int main()
{
    int sayi;

    printf("Kac adet * bastirilsin? \n");
    scanf("%d",&sayi);

    yildizbas(&sayi);

    return 0;
}
