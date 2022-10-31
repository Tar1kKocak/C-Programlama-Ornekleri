#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Yazilimin amaci : Carpma islemini toplama yoluyla yapmak.
    
    int sayi1,sayi2,i,sonuc=0;

    printf("Carpilmasini istediginiz iki adet pozitif tam sayi giriniz.\n");
    scanf("%d%d",&sayi1,&sayi2);

    for (i=sayi1;i>=1;i--) {

            sonuc += sayi2;

    }

 printf ("%d",sonuc);

    return 0;
}
