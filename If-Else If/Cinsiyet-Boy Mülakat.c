#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
 {
	setlocale(LC_ALL,"Turkish");
	
	char cinsiyet;
	int boy;
	
	printf("L�tfen cinsiyetinizi giriniz E/K.\n");
	scanf("%c",&cinsiyet);
	printf("L�tfen boyunuzu cm cinsinden giriniz.\n");
	scanf("%d",&boy);
	
	
	if (cinsiyet == 'E' || cinsiyet == 'e' && boy >= 160) {
		printf ("Tebrikler m�lakat� ge�tiniz.");
	}
	else if (cinsiyet == 'K' || cinsiyet == 'k' && boy >= 150){
	
		printf("Tebrikler m�lakat� ge�tiniz.");
	}	
	else {
		printf("M�lakat� ge�emediniz.");
	}
	return 0;
}
