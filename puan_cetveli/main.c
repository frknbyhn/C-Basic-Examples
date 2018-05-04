#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nots;
    printf("             ----------------HARF NOTU----------------\n");

    printf("NOTUNUZU OGRENEBILIR MIYIM ? ");
    scanf("%d", &nots);

    if (nots>0 && nots<=32)
    {
    printf("--------------------FF--------------------");
    }


    else if (nots >= 33 && nots <=39)
    {printf("--------------------DD--------------------");}

    else if (nots >= 40 &&nots <=45)
    {printf("--------------------DC--------------------");}

    else if (nots >= 46 &&nots <=49)
    {printf("--------------------CC--------------------");}

    else if (nots >= 50 &&nots <=55)
    {printf("--------------------CB--------------------");}

    else if (nots >= 56 &&nots <=60)
    {printf("--------------------BC--------------------");}

    else if (nots >= 61 &&nots <=65)
    {printf("--------------------BC--------------------");}

    else if (nots >= 66 &&nots <=70)
    {printf("--------------------BB--------------------");}

    else if (nots >= 71 &&nots <=76)
    {printf("--------------------BA--------------------");}

    else if (nots >= 77 &&nots <=83)
    {printf("--------------------AB--------------------");}

    else if (nots >= 84 &&nots <=100)
    {printf("--------------------AA--------------------");}

    else
    {printf("0-100 arasi bir sayi giriniz");}












    return 0;
}
