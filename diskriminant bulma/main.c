#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    int diskriminant;

    printf("             --------------DiSKRiMiNANT HESAPLAMA--------------\n");

    printf("x kareli ifadenin kat sayisini giriniz:");
    scanf("\n %d", &a);
    if (a>0)
    {

    printf("x ifadesinin kat sayisini giriniz:");
    scanf("\n %d", &b);

    printf("sabit sayiyi giriniz:");
    scanf("\n %d", &c);

    diskriminant=b*b-4*a*c;

    if (diskriminant>0)
    {
        printf("Uc koklu reel olup, en az biri digerlerinden farklidir");
    }
    else if (diskriminant=0)
    {

        printf("Uc koklu reel olup, hepsi birbirine esittir.");

    }
    else
    {
        printf("En az bir koku reeldir.");
    }









    }














    else
    {
        printf("Lutfen a sayisini 0 dan buyuk giriniz");
    }








}
