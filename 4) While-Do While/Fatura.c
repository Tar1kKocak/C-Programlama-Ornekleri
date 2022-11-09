#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Yazilimin Amaci : Girilen fatura degerlerine bakarak onceki aylarin ortalamasýna gore yuksek mý kucuk mu oldugunun ciktisini vermek.

    int adet,ay=0;
    float fatura,ort=0,toplam=0;

    printf("Fatura Takip Sistemine Hosgeldiniz...\n");
    printf("Kac aylik fatura girmek istiyorsunuz:");
    scanf("%d",&adet);

    while (adet>ay) {

            ay++;


            printf("%d. aydaki fatura tutarini giriniz:",ay);
            scanf("%f",&fatura);

            if(ay>1) {
                ort=toplam/(ay-1);
                if(fatura>ort) {
                    printf("Girilen bu ayki fatura tutari gecmis aylarin ortalamasindan yuksek, dikkatli olun :(\n");
                }
                else {
                    printf("Bu ay gecmis aylarin ortalamasina gore az veya esit tutarda faturaniz gelmis, gayet guzel :)\n");
                }
            }
            toplam=toplam+fatura;




    }
            ort=toplam/adet;

            printf("Girilen %d aylik sure icin toplam %.2f, aylik ortalama %.2f tutarlarinda fatura gelmis.", adet, toplam, ort);







    return 0;
}
