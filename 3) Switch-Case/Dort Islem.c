#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    /* Kullanicidan alinan +,-,*,/ karakter islem parametresine gore iki sayi arasinda dort islemden secileni yapan ve islemin yapisi ile sonucunu
    ekrana gösteren eger dort islemden farkli bir karakter girilirse hata veren C programini yaziniz*/



    setlocale (LC_ALL,"Turkish");

    char formul;
    float sayi1,sayi2;


    printf("Lütfen yapmak istediginiz islemin sembolunu seciniz.\n");
    printf("1-Toplama (+)\n2-Çikarma(-)\n3-Carpma(*)\n4-Bolme(/)\n");
    scanf("%c",&formul);
    printf("Lütfen iki adet sayı giriniz.(Birincisi büyük olmak şartıyla)\n");
    scanf("%f%f",&sayi1,&sayi2);



   switch(formul) {

       case '+' : printf("Toplama isleminizin sonucu = %.0f",sayi1+sayi2); break;
       case '-' :  printf("Çikarma isleminizin sonucu = %.0f",sayi1-sayi2); break;
       case '*' : printf("Çarpma islemimizin sonucu : %.0f",sayi1*sayi2); break;
       case '/' : printf("Bölme isleminizin sonucu : %.2f\n",sayi1/sayi2); break;


       default : printf("Lütfen geçerli bir sayi giriniz.\n");


   }
    return 0;
}
