#include <stdio.h>
#include <stdlib.h>

int main()
{
        //İnt Dizileri :

    int b[6]={},k;

    for(k=0;k<5;k++) {
        printf("Lutfen bir tam sayi giriniz.\n");
        scanf("%d",&b[k]);
    }
    for(k=0;k<5;k++) {
        printf("%d \n",b[k]);
    }



        //Float Dizileri :

    int i;
    float sayilar[7]={};
    for(i=0;i<7;i++) {
        printf("Lutfen bir sayi giriniz.\n");
        scanf("%f",&sayilar[i]);
    }

    for(i=0;i<7;i++) {
        printf("%.2f\n",sayilar[i]);
    }




        //Karakter Dizileri :

     char ulke[6];

    for (int a=0;a<5;a++) {
        printf("Lutfen bir karakter giriniz.\n");
        scanf(" %c",&ulke[a]);
    }
        printf("%s",ulke);

    return 0;
}
