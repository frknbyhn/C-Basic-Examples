#include <stdio.h>
#include <stdlib.h>

int main()
{
    char adi[25];
    char soyad[25];

    printf("Adi: ");
    gets(adi);

    printf("Soyad: ");
    gets(soyad);

    printf("%s %s",birles(adi,soyad));

    return 0;


}


void birles(char adi, char soyad)
{
    printf("%s %s",adi,soyad);
    return 0;
}
