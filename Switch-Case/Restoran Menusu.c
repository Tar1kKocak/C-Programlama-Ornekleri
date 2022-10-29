#include <stdio.h>
#include <locale.h>

int main()
{

  setlocale(LC_ALL, "Turkish");
  
  int toplamucret,baslangicno,corbano,anano,icecekno;
  
  
  printf("Hoþgeldiniz.Baþlangýç menülerimiz þu þekildedir.\n");
  a: printf("1.Sarma dolma => 25 TL\n2.Patates kýzartma => 29 TL\n3.Tavuklu salata => 36 TL\n");
  scanf("%d",&baslangicno);
  
  switch (baslangicno) {
  	
  	case 1 : toplamucret = 25; break;
  	case 2 : toplamucret = 29; break;
  	case 3 : toplamucret = 36; break;
  	default : printf("Lütfen 1-3 arasýnda bir deðer giriniz..\n"); 
  	if (baslangicno > 3) {
  		goto a;
	  }

  }
  
  printf("Çorba menülerimiz þu þekildir.\n");
  b: printf("1.Tarhana çorbasý => 32 TL\n2.Kelle paça çorbasý => 52TL\n3.Sebze çorbasý => 34 TL\n4.Mercimek çorbasý => 37 TL\n");
  scanf("%d",&corbano);
  
  switch (corbano) {
  	
  	case 1 : toplamucret = toplamucret + 32; break;
  	case 2 : toplamucret = toplamucret + 52; break;
  	case 3 : toplamucret = toplamucret + 34; break;
  	case 4 : toplamucret = toplamucret + 37; break;
  	default : printf("Lütfen 1-4 arasýnda bir deðer giriniz.\n"); 
  	if (corbano > 4) {
  		goto b;
	  }
  }
  
  printf("Ana yemeklerimiz þu þekildedir.\n");
  c: printf("1.Etli pilav + salata => 65TL\n2.Ýskender => 85TL\n3.Pirzola + salata =>200 TL\n4.XL kýymalý pide => 70TL\n");
  scanf("%d",&anano);
  
  switch (anano) {
  	
  	case 1 : toplamucret = toplamucret + 65; break;
  	case 2 : toplamucret = toplamucret + 85; break;
  	case 3 : toplamucret = toplamucret + 200; break;
  	case 4 : toplamucret = toplamucret + 70; break;
  	default : printf("Lütfen 1-4 arasýnda bir deðer giriniz.\n"); 
  	if (anano > 4) {
  		goto c;
	  }
  	
  }
  
  printf("Ýçeceklerimiz þu þekildedir.\n");
  d: printf("1.Açýk ayran =>20 TL\n2.Kapalý ayran => 12TL\n3.Fanta => 14TL\n4.Kola => 15TL\n");
  scanf("%d",&icecekno);
  
  switch (icecekno) {
  	
  	case 1 : toplamucret = toplamucret + 20; break;
  	case 2 : toplamucret = toplamucret + 12; break;
  	case 3 : toplamucret = toplamucret + 14; break;
  	case 4 : toplamucret = toplamucret + 15; break;
  	default: printf("Lütfen 1-4 arasýnda bir deðer giriniz.\n"); 
  	if (icecekno > 4) {
  		goto d;
	  }
  	
  }
  
  	printf("Toplam ödemeniz gereken ücret = %d",toplamucret);


return 0;

}
