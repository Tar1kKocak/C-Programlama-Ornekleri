#include <stdio.h>
#include <stdlib.h>


int main()
{

    int for1,while1,doWhile1;


    for (for1=1;for1<=10;for1++) {
        printf ("%d ",for1);
    }
    printf("\n");



    while1=1;
    while(while1<=10) {
        printf("%d ",while1);
        while1++;
    }
    printf("\n");



    doWhile1=1;
    do {
        printf("%d ",doWhile1);
        doWhile1++;
    }while(doWhile1<=10);
    printf("\n");














    return 0;
}
