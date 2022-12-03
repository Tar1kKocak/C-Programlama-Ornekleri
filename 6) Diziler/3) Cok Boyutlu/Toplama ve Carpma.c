#include <stdio.h>
#include <stdlib.h>

//Yazilimin Amaci : Girilen 2 matris dizinin toplamini ve carpimini bulma.

int main()
{

    int dizi1[2][3],dizi2[2][3];
    int toplam[2][3],carpma[2][3];


     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d satir %d sutundaki elemani giriniz.",i+1,j+1);
            scanf("%d",&dizi1[i][j]);
        }
    }
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d satir %d sutundaki elemani giriniz.",i+1,j+1);
            scanf("%d",&dizi2[i][j]);
        }
    }
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            toplam[i][j]=dizi1[i][j]+dizi2[i][j];
        }
    }
     for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            carpma[i][j]=dizi1[i][j]*dizi2[i][j];
        }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",toplam[i][j]);
        }
    }

    printf("\n");

    for(int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            printf("%d ",carpma[i][j]);
        }
    }



    return 0;
}
