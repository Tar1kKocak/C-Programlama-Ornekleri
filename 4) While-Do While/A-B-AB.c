#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Kullanicidan alinan baslangic ve bitis degerleri aras�ndaki say�lardan 2 ile tam b�l�nenlerin yan�na "a",3 ile tam b�l�nenlerin yan�na "b"
      hem 2 hem de 3'e b�l�nenlerin sonuna "ab" yazd�r�n�z ve say� 5'e b�l�n�yorsa hi�bir �ey yazmadan d�ng�de sonraki de�erlere bakmaya devam eden
      C program�*/


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
