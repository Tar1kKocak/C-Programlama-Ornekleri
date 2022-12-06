#include <stdio.h>
#include <stdlib.h>

//Yazilimin Amaci : Aranan deger sahip olunan degerler arasinda var mi yok mu.

int main()
{
    int deger[10]={1,3,5,7,9,11,13,15,17,19};
    int *p1=&deger[0];
    int girilensayi;
    int i,varsa=0;

    printf("Aranan degeri giriniz: ");
    scanf("%d",&girilensayi);

    for(i=0;i<10;i++){

        if(*p1==girilensayi){
            printf("Aranan degerin indeksi : %d",i);
            varsa++;

        }
        p1++;
    }
    if(varsa==0){
        printf("Aranan Deger Yok");
    }


    return 0;
}
