#include <stdio.h>
#include <stdlib.h>

int main()
{
    int girilen_sayi, toplam=0;
    printf("sayi gir : ");
    scanf("%d", &girilen_sayi);
    toplam += girilen_sayi;


    while (girilen_sayi !=0)
    {
    printf("sayi gir : ");
    scanf("%d", &girilen_sayi);
    toplam += girilen_sayi;
    }

    printf("Toplam: %d", toplam);
    return 0;
}
