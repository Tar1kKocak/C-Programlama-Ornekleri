#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Yazilimin Amaci : 1 ile 1000 arasindaki tum palindrome sayilarini konsola yazdiran bir program yaziniz.
    //  Palindrome sayi : tersi kendisiyle ayni olan sayidir.

    int sayi=1,i,ters=0;

    while (sayi<=1000){


         for (i=sayi;i>0;i/=10) { //Tersi Bulma Kýsmý

            ters = (ters*10) + (i%10);

         }


          if (ters==sayi) {
            printf("%d ",sayi);

        }
                ters=0;
               sayi++;

    }

    return 0;
}
