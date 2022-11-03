#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Yazilimin Amaci : Girilen on adeet sayinin pozitif mi negatif mi oldugunu bulmak.

    int adet,i;
    int sayi[10]={};


    for(i=0;i<9;i++){

    printf("On adet sayi giriniz.(Pozitif veya Negatif)\n");
    scanf("%d",&sayi[i]);

    }

    for (i=0;i<9;i++) {

        if(sayi[i]<0) {
            printf("Negatif Sayi : %d\n",sayi[i]);

        }

        else if (sayi[i]>=0) {
            printf("Pozitif Sayi : %d\n ",sayi[i]);
        }
    }



    return 0;
}
