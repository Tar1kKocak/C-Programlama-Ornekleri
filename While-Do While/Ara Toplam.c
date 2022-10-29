#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    //Yazilimin amaci : Girilen iki sayi arasindaki sayilarin toplamini bulmak.


	setlocale(LC_ALL,"Turkish");

	int sayi1,sayi2;

	printf("Kaçla kaç arasýndaki sayýlarý toplayalým?\n");
	scanf("%d%d",&sayi1,&sayi2);


	//son terim - ilk terim +1 , abs = mutlak deðer

	int terimsayisi=abs(sayi1-sayi2)+1;
	int toplam=0;


	if (sayi2>sayi1) {
		while (terimsayisi>0) {
			printf("%d+",sayi1);
			toplam = toplam + sayi1;
			sayi1++;
			terimsayisi--;
		}
	}

	else if (sayi2<sayi1) {
		while (terimsayisi>0) {
			printf ("%d+",sayi2);
			toplam = toplam + sayi2;
			sayi2++;
			terimsayisi--;

		}
	}
	printf("Toplam => %d",toplam);


	return 0;
}
