#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
        //  Kullanicidan bir tam sayi girmesini isteyen ve girilen tam sayinin Armstrong sayi olup olmaddigini kontrol eden bir program yaziniz.
        //  Armstrong sayi : Rakamlarinin basamak sayisi kadar uslerinin toplami kendisine esit olan sayidir.


   int sayi,kontrol=0,i,a,k,arms=0;
   printf("Lutfen bir tam sayi giriniz.\n");
   scanf("%d",&sayi);
   i=sayi;

        while (i>0) {

        i/=10;

        kontrol++;      //Kontrol = Kac tane basamak oldugu.

    }
    i=sayi;

    a=kontrol;

            while(i>0){

            k=i%10;

        arms+=pow(k,kontrol);


        i=i/10;

    }
    printf("%d",arms);


    return 0;
}
