#include <stdio.h>
#include <stdlib.h>

//Yazilimin Amaci : Sahip olunan rakam dizisini düz ve ters yazmak.

int main()
{
    int dizi[5]={7,9,2,1,0};
    int *p1=&dizi[0];
    int i=0,a=5;

    printf("Dizi elemanlarinin ekrana yazdirilmasi.\n");

    while (i<5){

        printf("%d\n",*p1);
        p1++;
        i++;
    }
    printf("Dizi elemanlarinin tersten ekrana yazdirilmasi.\n");

    p1--;

    while(a>0){

        printf("%d\n",*p1);
        p1--;
        a--;
    }







    return 0;
}
