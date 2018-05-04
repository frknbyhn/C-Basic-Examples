#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yas, yil, ay, hafta, gun;
    long int saat, dakika, saniye;


    printf("           ----------------NE KADAR SURE YASADiN ???----------------\n");

    printf("Kac yasindasin  ?  ");
    scanf("%d", &yas);

    ay=yas*12;
    hafta=yas*52;
    gun=yas*365;
    saat=yas*8760;
    dakika=yas*525600;
    saniye=yas*3153600;

    printf("%d ay %d hafta %d gun %d saat %d dakika %d saniye YASADINIZ... ", ay, hafta,gun,saat,dakika,saniye);
}
