#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("             -----------------------HANGI GUNDESIN???-----------------------\n\n\n");
    int gun;
    printf("Bir gun numarasi giriniz: ");
    scanf("%d", &gun);

    if(gun==1)
    printf("PAZARTESI");

    else if (gun==2)
    printf("SALI");

    else if (gun==3)
    printf("CARSAMBA");

    else if (gun==4)
    printf("PERSEMBE");

    else if (gun==5)
    printf("CUMA");

    else if (gun==6)
    printf("CUMARTESI");

    else if (gun==7)
    printf("PAZAR");

    else
        printf("1-7 arasinda bir sayi giriniz...");

    return 0;
}
