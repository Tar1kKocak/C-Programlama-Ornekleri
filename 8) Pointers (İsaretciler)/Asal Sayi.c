#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

//Yazilimin Amaci : Asal mý degil mi

int main()
{
    int sayi,*sayiadresi=&sayi,asaldegil=0,i;

    printf("Asal olup olmadigini ogrenmek istediginiz sayiyi giriniz:");
    scanf("%d",&sayi);

    for(i=2;i<*sayiadresi;i++){

        if(*sayiadresi%i==0){
            asaldegil++;
            break;
        }

    }
    if(asaldegil==1){
        printf("Sayiniz asal degil");
    }
    else{
        printf("Sayiniz asal bir sayidir");
    }


    return 0;
}
