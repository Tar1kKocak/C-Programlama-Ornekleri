#include <stdio.h>
#include <stdlib.h>

//Yazilimin Amaci : Matris dizisini ekrana bastirma

int main()
{
    int dizi[3][4]={{1,2,3,4},{5,6,7,8},{9,1,5,3}};

    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++) {
            printf("%d ",dizi[i][j]);
        }
        printf("\n");
    }




    return 0;
}
