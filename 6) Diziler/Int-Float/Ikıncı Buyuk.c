#include <stdio.h>
#include <stdlib.h>
#define MAX_SIZE 100

int main()
{
    //Yazilimin Amaci : Girilen sayilar arasindan en buyuk iki sayiyi bulmak.

    int max1,max2,sayi[MAX_SIZE],adet,i;

    printf("Kac adet sayi gireceksiniz.\n");
    scanf("%d",&adet);

    for(i=0;i<adet;i++) {
        printf("Sayi giriniz.\n");
        scanf("%d",&sayi[i]);
    }
    max1=sayi[0];
    max2=sayi[0];
    //max1 = max2 = INT_MIN;

    for(i=1;i<adet;i++) {

        if (sayi[i]>max1) {
            max2=max1;
            max1=sayi[i];
        }
        else if(sayi[i]>max2 && sayi[i]<max1){
            max2=sayi[i];
        }

    }

        printf("En buyuk :%d\nIkinci en buyuk :%d ",max1,max2);



    return 0;
}
