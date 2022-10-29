#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
 {
	setlocale(LC_ALL,"Turkish");
	
	char cinsiyet;
	int boy;
	
	printf("Lütfen cinsiyetinizi giriniz E/K.\n");
	scanf("%c",&cinsiyet);
	printf("Lütfen boyunuzu cm cinsinden giriniz.\n");
	scanf("%d",&boy);
	
	
	if (cinsiyet == 'E' || cinsiyet == 'e' && boy >= 160) {
		printf ("Tebrikler mülakatý geçtiniz.");
	}
	else if (cinsiyet == 'K' || cinsiyet == 'k' && boy >= 150){
	
		printf("Tebrikler mülakatý geçtiniz.");
	}	
	else {
		printf("Mülakatý geçemediniz.");
	}
	return 0;
}
