#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Yazilimin Amaci :Kullaicidan bir sayi girmesini isteyen ve 0 ile girilen sayi arasindaki tüm rakamlari ayni olan sayilari ekrana yazdiran programi yaziniz.

    int sayi,a,b,i;

    printf("Lutfen bir sayi giriniz.\n");
    scanf("%d",&sayi);



    while (sayi>=0) {

             a=sayi%10;
                b=sayi/10;

                if(a==b) {
                    printf("%d \n",sayi);


                }



       sayi--;
    }

    printf("%d",a);



    return 0;
}
