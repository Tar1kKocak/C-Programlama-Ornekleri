#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main()


 {
 	setlocale(LC_ALL,"Turkish");
 	
 	int puan;
 	
 	printf("L�tfen puan�n�z� giriniz.\n");
 	scanf("%d",&puan);
 	
 	/*
 	   80-100 = �ok iyi
 	   60-80 = iyi
 	   40-60 = orta
 	   20-40 = k�t�
 	   0-20 = �ok k�t� */
 	   
 	   
 	if (puan >= 80 && puan <= 100) {
 		
 		printf("Puan�n�z �ok iyi.");
	 }  
 	   
 	else if (puan >=60 && puan < 80) {
 		printf("Puan�n�z iyi.");
	 }
 	else if (puan >=40 && puan < 60) {
 		printf("Puan�n�z orta.");
	 }
 	else if (puan >=20 && puan < 40) {
 		printf("Puan�n�z k�t�.");	
	 }
 	else if (puan >=0 && puan < 20) {
 		printf("Puan�n�z �ok k�t�.");
	 }
	 else {
	 	printf("L�tfen 0-100 aras�nda bir de�er giriniz.");
	 }
 	
	return 0;
}
