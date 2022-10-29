#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



    int main()
 {
     //Yazilimin Amaci : Yaricapi bilinen cemberin alani,hacmi ve cevresini bulmak.

 	setlocale(LC_ALL,"Turkish");

 	float pi = 3.14;
 	float cemberinyaricapi;

 	printf("Çemberinizin yarýçapýný giriniz.\n");
 	scanf("%f",&cemberinyaricapi);

 	printf("Çemberinizin yarýçapý : %.3f\n",cemberinyaricapi);
 	printf("Çemberinizin alaný : %.3f\n",pi*cemberinyaricapi*cemberinyaricapi);
 	printf("Çemberinizin hacmi : %.3f\n",(4/3) * pi * cemberinyaricapi * cemberinyaricapi);
 	printf("Çemberinizin çevresi : %.3f",2*pi*cemberinyaricapi);






	return 0;
}
