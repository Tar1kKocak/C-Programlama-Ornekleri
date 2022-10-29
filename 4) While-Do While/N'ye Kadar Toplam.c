#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
 {
	setlocale(LC_ALL,"Turkish");
	
	int sayac;
	int x=1;
	int toplam=0;
	
	printf("Lütfen kaça kadar toplamak istediðinizi giriniz.\n");
	scanf("%d",&sayac);
	
	
	while(sayac>0) {
		printf("%d+",x);
		toplam = toplam + x;
		x++;
		sayac--;
	
	}
	
	printf("=%d",toplam);
	
	
	
	return 0;
}
