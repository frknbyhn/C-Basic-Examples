#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *dosya,*sayi,*yazi;
    dosya=fopen("dosya.txt","r");
    if(dosya==NULL)
    {
        printf("dosya.txt acilamadi.");
    }

    char karakter,karakter2;

    sayi=fopen("sayi.txt","w+");
    if(sayi==NULL)
    {
        printf("sayi dosyasi acilamadi.");
    }

    yazi=fopen("yazi.txt","w+");
    if(yazi==NULL)
    {
        printf("yazi dosyasi acilamadi.");
    }

    karakter2=fgetc(dosya);
    while(karakter2!=EOF)
    {
        karakter=fgetc(dosya);
                 if(karakter2>47&&karakter2<58)
        {
            fputc(karakter2,sayi);
            if(karakter2>48||karakter2<57)
                fputc(' ',sayi);
        }
        else if ((karakter2>64&&karakter2<91)||(karakter2>96&&karakter2<123))
        {
            fputc(karakter2,yazi);
            if(!((karakter>64 && karakter<91)||(karakter>96 && karakter<123)))
                fputc(' ',yazi);
        }
    }
    karakter2=karakter;
    fclose(dosya);
    fclose(sayi);
    fclose(yazi);


    return 0 ;

}
