#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Turkish");

   int sayi;

   printf("Girdi�iniz say� ile 0 aras�nda kalan 5'e b�l�nebilen say�lar� yazd�ral�m.\n");
   scanf("%d",&sayi);

   if (sayi>=0) {

    for(int i=0;i<sayi;i+=5) {

        printf("%d\n",i);
    }


    }

    else  {

        for(int i=0;sayi<i;i-=5){
            printf("%d\n",i);
        }

    }

    return 0;
}
