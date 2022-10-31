#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
        /*Kullanicidan alinan baslangic ve bitis degerleri arasýndaki sayýlardan 2 ile tam bölünenlerin yanýna "a",3 ile tam bölünenlerin yanýna "b"
        hem 2 hem de 3'e bölünenlerin sonuna "ab" yazdýrýnýz ve sayý 5'e bölünüyorsa hiçbir þey yazmadan döngüde sonraki deðerlere bakmaya devam eden
        C programý  */

    setlocale (LC_ALL,"Turkish");

    int baslangic,bitis,i;

    printf("Baslangic ve bitis noktasýný yaziniz.\n");
    scanf("%d%d",&baslangic,&bitis);

    for (i=baslangic;i<=bitis;i++) {

        if(i%5==0)
        continue;
        else if(i%2==0 && i%3==0) {

            printf("%d - ab\n",i);
            }
        else if(i%2==0) {
            printf("%d - a\n",i);
            }
        else if(i%3==0) {
            printf ("%d - b\n",i);
            }
    }
     return 0;
}
