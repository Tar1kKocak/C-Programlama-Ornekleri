#include <stdio.h>
#include <stdlib.h>

//Yazilimin Amaci : Tek-Cift bulmak


    void tekciftbulma(int sayi){

        if(sayi%2==0) {
            printf("Sayiniz cift sayidir.");
        }
        else if(sayi%2!=0){
            printf("Sayiniz tek sayidir.");
        }

    }






int main()
{
    int sayi,sonuccift=0,sonuctek=0;

    printf("Tek mi cift mi oldugunu ogrenmek istediginiz sayiyi giriniz:");
    scanf("%d",&sayi);

    tekciftbulma(sayi);








    return 0;
}
