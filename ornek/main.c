#include <stdio.h>
#include <stdlib.h>

int main()
{
    // öğrencilerin adını notlarını not ortalamalarını dosyaya yaz sortla sırala


    FILE *ogrenci = NULL;
    ogrenci = fopen("ogrenci.txt","rw+");
    if(ogrenci==NULL)
    {
        printf("dosya acilamadi.");
        exit(1);
    }

    int not1,not2,notort;
    char ad;

    printf("Ogrencinin 1.notunu giriniz: ");
    scanf("%d",&not1);

    printf("Ogrencinin 2.notunu giriniz: ");
    scanf("%d",&not2);

    printf("Ogrencinin adini giriniz: ");
    scanf("%s",ad);

    notort=(not1+not2)/2;

    fprintf(ogrenci,"%s",ad);
    fprintf(ogrenci,"%d",notort);


    return 0;










}
