#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    // Yazilimin amaci : For degiskeninin mantigi.
    
    setlocale(LC_ALL,"Turkish");

   int sayi;

   printf("Girdiðiniz sayý ile 0 arasýnda kalan 5'e bölünebilen sayýlarý yazdýralým.\n");
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
