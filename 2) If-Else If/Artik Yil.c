#include <stdio.h>
#include <stdlib.h>

int main() {
        //Yazilimin Amaci : Kullanicidan bir yil degeri girmesini isteyen ve girilen yilin artik yil olup olmadigini
    //kontrol eden bir program yaziniz.Artik Yil : 4 ile kalansýz bölünebilen yil.


    int sayi;

    printf("Lutfen bir yil degeri giriniz.\n");
    scanf("%d",&sayi);

    if (sayi%4==0) {
        printf("Yiliniz Artik Yil'dir.\n");
    }
    else {
        printf("Yiliniz Artik Yil degildir.\n");

    }


    return 0;
}
