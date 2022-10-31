#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    /* Kullanicidan alinan +,-,*,/ karakter islem parametresine gore iki sayi arasinda dort islemden secileni yapan ve islemin yapisi ile sonucunu
    ekrana g�steren eger dort islemden farkli bir karakter girilirse hata veren C programini yazini*/



    setlocale (LC_ALL,"Turkish");

    char formul;
    float sayi1,sayi2;


    printf("L�tfen yapmak istediginiz islemin sembolunu seciniz.\n");
    printf("1-Toplama (+)\n2-�ikarma(-)\n3-Carpma(*)\n4-Bolme(/)\n");
    scanf("%c",&formul);
    printf("L�tfen iki adet say� giriniz.(Birincisi b�y�k olmak �art�yla)\n");
    scanf("%f%f",&sayi1,&sayi2);



   switch(formul) {

       case '+' : printf("Toplama isleminizin sonucu = %.0f",sayi1+sayi2); break;
       case '-' :  printf("�ikarma isleminizin sonucu = %.0f",sayi1-sayi2); break;
       case '*' : printf("�arpma islemimizin sonucu : %.0f",sayi1*sayi2); break;
       case '/' : printf("B�lme isleminizin sonucu : %.2f\n",sayi1/sayi2); break;


       default : printf("L�tfen ge�erli bir sayi giriniz.\n");


   }
    return 0;
}
