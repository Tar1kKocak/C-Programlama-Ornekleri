#include <stdio.h>
#include <stdlib.h>

//Yazilimin Amaci : Pointer ile deger degistirme

int main()
{
    int a=10,b=20;
    int *p1=&a,*p2=&b;

    printf("Degisim Oncesi : a=%d b=%d\n",a,b);

    *p1=*p2;
    *p2=*p1;


    printf("Degisim Sonrasi : a=%d b=%d",a,b);

    return 0;
}

