#include <stdio.h>
#include <stdlib.h>

//Yazilimin Amaci : malloc, calloc, realloc, free kullanim sekilleri

int main()
{
    int *alan1 = malloc(10*sizeof(int)); //Ram'de Korur

    int  *alan2 = calloc(10,sizeof(int)); //Ram'de Sýfýrlar

    int i;
    for(i=0;i<10;i++){
        printf("alan1[%d]=%d  alan2[%d]=%d\n",i,alan1[i],i,alan2[i]);
    }
    printf("\n\n");

    alan1 = realloc(alan1,5*sizeof(int));   //Degisiklik Yapar

    for(i=0;i<5;i++){
        printf("alan1[%d]=%d\n",i,alan1[i]);
    }

    free(alan1);    //Degisiklikleri kaydeder
    free(alan2);

    return 0;
}
