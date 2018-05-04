#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sayi1, sayi2;
    printf("              -------------------HANGI SAYI BUYUK????-------------------\n");


    printf("Hesaplamak istediginiz 1. sayiyi giriniz:");
    scanf("%d", &sayi1);

    printf("Hesaplamak istediginiz 2. sayiyi giriniz:");
    scanf("%d", &sayi2);

    if (sayi1>sayi2)
    {
        printf("Girdiginiz 1.sayi 2.sayidan daha buyuktur.");
    }
    else
    {
        printf("Girdiginiz 2.sayi 1.sayidan daha buyuktur.");
    }
    return 0;
}
