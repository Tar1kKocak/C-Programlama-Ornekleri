#include <stdio.h>
#include <stdlib.h>

//Yazilimin Amaci : Cok boyutlu bir isci listesi

void isimlerilistele(char isimdizisi[][30],int boyut) {

    for(int i=0;i<boyut;i++){
        printf("%s\n",&isimdizisi[i]);
    }

}


int main()
{

    char calisanisimleri[5][30] = {"Tarik","Efsa","Elif","Batuhan","Enes"};

    isimlerilistele(calisanisimleri,5);


    return 0;
}
