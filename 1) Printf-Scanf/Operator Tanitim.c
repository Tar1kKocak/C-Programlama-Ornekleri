#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
        //Not Defteri : Operatorlerin tanimi,mantigi

        setlocale(LC_ALL,"Turkish");


        Toplama : a + b == sonuc
        ------------------------
        Cikarma : a - b == sonuc
        ------------------------
        Carpma  : a * b == sonuc
        ------------------------
        Bolme   : a / b == sonuc
        ------------------------
        Mod     : a % b == sonuc

        Modun anlami => a sayisinin b sayisina bolumunden kalaný vermek.
        Ornek => 18 % 5 == 3
        ------------------------
        a-- ifadesinin anlami => a sayisini bir azalt yani (a-1) ifadesine es degerdir.
        a++ ifadesinin anlami => a sayisini bir arttir yani (a+1) ifadesine es degerdir.
        ------------------------
        Tek basina (=) ifadesi atama anlamýna gelir.Yani, a=2 ifadesi a artik ikidir anlamýna gelir.
        Ýki adet esittir (==) seklinde olursa normal bilinen esittir anlamina gelmektir, Yani, 3+2==5
        Esit degil ifadesi (!=) seklinde ifade edilir. Yani, 5!=6
        ------------------------
        Buyuktur : a > b : a, b den buyuktur.
        Kucuktur : a < b : b, a dan buyuktur.
        Buyuk esit : a >= b : a, b den buyuk veya b ye esittir.
        Kucuk esit : a <= b : a, b den kucuk veya b ye esittir.
        ------------------------
        Ve ifadesi yazilimsal olarak (&&) seklinde ifade edilir. Yani, a>3 && a<10
        Veya ifadesi yazilimsal olarak (||) seklinde ifade edilir. Yani, a>5 || b>8
        ------------------------
        BITTI. EKLEMELER GELEBILIR...











    return 0;
}
