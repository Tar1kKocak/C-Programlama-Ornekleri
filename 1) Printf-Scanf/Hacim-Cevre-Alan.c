#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



    int main()
 {
     //Yazilimin Amaci : Yaricapi bilinen cemberin alani,hacmi ve cevresini bulmak.

 	setlocale(LC_ALL,"Turkish");

 	float pi = 3.14;
 	float cemberinyaricapi;

 	printf("�emberinizin yar��ap�n� giriniz.\n");
 	scanf("%f",&cemberinyaricapi);

 	printf("�emberinizin yar��ap� : %.3f\n",cemberinyaricapi);
 	printf("�emberinizin alan� : %.3f\n",pi*cemberinyaricapi*cemberinyaricapi);
 	printf("�emberinizin hacmi : %.3f\n",(4/3) * pi * cemberinyaricapi * cemberinyaricapi);
 	printf("�emberinizin �evresi : %.3f",2*pi*cemberinyaricapi);






	return 0;
}
