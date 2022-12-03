#include <stdio.h>
#include <stdlib.h>

//Yazilimin Amaci : Faktoriyel yapan fonksiyon

int faktoriyelhesapla(int sayi){
    int sonuc=1;
    for(int i=0;i<sayi;i++){
        sonuc*=(i+1);
    }
    return sonuc;
}


int main()
{
    int sayi;
    printf("Faktoriyelini ogrenmek istediginiz sayiyi giriniz.");
    scanf("%d",&sayi);
    printf("%d",faktoriyelhesapla(sayi));



    return 0;
}
