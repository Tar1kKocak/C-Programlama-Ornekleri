#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kullanicidan alinan baslangic ve bitis degerleri arasýndaki sayýlardan 2 ile tam bölünenlerin yanýna "a",3 ile tam bölünenlerin yanýna "b"
      hem 2 hem de 3'e bölünenlerin sonuna "ab" yazdýrýnýz ve sayý 5'e bölünüyorsa hiçbir þey yazmadan döngüde sonraki deðerlere bakmaya devam eden
      C programý*/


    int baslangic,bitis,sayi;


    printf("Lutfen oncelikle baslangic sonrasinda ise  bitis sayinizi giriniz.\n");
    scanf("%d%d",&baslangic,&bitis);

        sayi=baslangic;

    while (sayi<=bitis) {

        if(sayi%5==0) {
            sayi++;
            continue;
        }
        else if(sayi%2==0 && sayi%3==0) {
            printf("%d - ab\n",sayi);
        }
        else if(sayi%2==0) {
            printf("%d - a\n",sayi);
        }
        else if(sayi%3==0) {
            printf("%d - b\n",sayi);
        }
        sayi++;
    }


    return 0;
}
