#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Yazilimin Amaci : Girilen 10 adet sayiyi ekrana bastirmak.

    int sayi[11]={},i;

    for(i=0;i<10;i++) {
        printf("Lutfen bir sayi degeri giriniz.\n");
        scanf("%d",&sayi[i]);
    }
    for (i=0;i<10;i++) {
        printf("%d\n",sayi[i]);
    }

    return 0;
}
