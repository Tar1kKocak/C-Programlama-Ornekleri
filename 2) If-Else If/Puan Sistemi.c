#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()


 {
	//Yazilimin Amaci: Sinavdan alinan puanin derecesini ogrenmek.
	
 	setlocale(LC_ALL,"Turkish");
 	
 	int puan;
 	
 	printf("Lütfen puanınızı giriniz.\n");
 	scanf("%d",&puan);
 	
 	/*
 	   80-100 = çok iyi
 	   60-80 = iyi
 	   40-60 = orta
 	   20-40 = kötü
 	   0-20 = çok kötü */
 	   
 	   
 	if (puan >= 80 && puan <= 100) {
 		
 		printf("Puanınız çok iyi.");
	 }  
 	   
 	else if (puan >=60 && puan < 80) {
 		printf("Puanınız iyi.");
	 }
 	else if (puan >=40 && puan < 60) {
 		printf("Puanınız orta.");
	 }
 	else if (puan >=20 && puan < 40) {
 		printf("Puanınız kötü.");	
	 }
 	else if (puan >=0 && puan < 20) {
 		printf("Puanınız çok kötü.");
	 }
	 else {
	 	printf("Lütfen 0-100 arasında bir değer giriniz.");
	 }
 	
	return 0;
}
