#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
        setlocale(LC_ALL,"Turkish");

    int i,j;

    for (i=1;i<10;i++) {

        for (j=1;j<10;j++) {
            printf ("%d x %d = %d\t",i,j,i*j);
        }
        printf("\n");
    }


    return 0;
}
