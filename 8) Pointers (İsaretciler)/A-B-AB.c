#include <stdio.h>
#include <stdlib.h>

/*  Kullanicidan alinan baslangic ve bitis degerleri aras�ndaki say�lardan 2 ile tam b�l�nenlerin yan�na "a",3 ile tam b�l�nenlerin yan�na "b"
    hem 2 hem de 3'e b�l�nenlerin sonuna "ab" yazd�r�n�z ve say� 5'e b�l�n�yorsa hi�bir �ey yazmadan d�ng�de sonraki de�erlere bakmaya devam eden
    C program�*/

int main()
{
    int baslangic,bitis,i;
    int *basadres=&baslangic,*bitadres=&bitis;



    printf("Baslangic degerini giriniz:");
    scanf("%d",&baslangic);
    printf("\nBitis degerini giriniz:");
    scanf("%d",&bitis);


    for(i=*basadres;i<*bitadres;i++){

        if(i%5==0){
            continue;
        }
        else if(i%2==0 && i%3==0){
            printf("%d:ab\n",i);
        }
        else if(i%2==0){
            printf("%d:a\n",i);
        }
        else if(i%3==0){
            printf("%d:b\n",i);
        }
    }


    return 0;
}
