#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi,i,ters=0;


    printf("Lutfen sayiyi giriniz.\n");
    scanf("%d",&sayi);
    i=sayi;
    while (i>0) {


        //254
       ters = (ters*10) + (i%10);  //4 , 45,450


        i=i/10;


    }

    printf("%d sayinizin tersi : %d\n",sayi,ters);

    if (sayi==ters) {
        printf("%d sayisi palindrom sayidir.",sayi);
    }
    else if (sayi!=ters) {
        printf("%d sayisi palindrom sayi degildir.",sayi);
    }



    return 0;
}
