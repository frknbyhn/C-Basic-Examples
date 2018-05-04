#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

void sifre_kontrol()
{
    FILE *sifre=NULL;
    sifre=fopen("sifre.txt","r");
    if(sifre==NULL)
    {
        printf("Sifre Kontrolu Yapilamadi.");
        exit(1);
    }

    int girilen_sifre,kontrol;

    printf("Sifre (123) :");
    scanf("%d",&girilen_sifre);

    fscanf(sifre,"%d",&kontrol);
    if(girilen_sifre==kontrol)
    {
        printf("-------------Giris Yapildi-------------\n\n\n");
        return;
    }
    else printf("!!!!!!   Yanlis Sifre Girdiniz    !!!!!!");
    exit(1);

}
typedef enum
{
    Red=1,
    Green,
    Blue
} sal_isim;

typedef struct
{
    char red [25];
    char green [25];
    char blue [25];
} sal_film;

typedef enum
{
    m1=1,
    m2,
    m3,
    m4,
    m5
} matine_no;


int main()
{
    sifre_kontrol();

    int islem_sorgu=0,bilet_say=0,ogrenci_say=0,tamsay=0,ucret=0,top_ucret=0,top_hasilat=0;
    char bilet_tur,sorgu,hasilat_sorgu;


    do
    {
        sal_film film[25];
        sal_isim isim[25];
        matine_no matno;

        FILE *salon=NULL;
        salon=fopen("salon.txt","r");
        if(salon==NULL)
        {
            printf("Sinema Salonu Dosyasi Acilamadi.");
            exit(1);
        }

        FILE *matine=NULL;
        matine=fopen("matine.txt","r");
        if(matine==NULL)
        {
            printf("Matine Dosyasi Acilamadi.");
            exit(1);
        }

        FILE *film_isim=NULL;
        film_isim=fopen("film.txt","r");
        if(film_isim==NULL)
        {
            printf("Film Dosyasi Acilamadi.");
            exit(1);
        }

        FILE *tutar=NULL;
        tutar=fopen("tutar.txt","r");
        if(tutar==NULL)
        {
            printf("Toplam Hasilat Dosyasi Acilamadi.");
            exit(1);
        }

        FILE *koltuk=NULL;
        koltuk=fopen("koltuk.txt","r");
        if(tutar=NULL)
        {
            printf("Koltuk Dosyasi Acilamadi");
            exit(1);
        }


        printf("Sinema Salonunu Seciniz (1) (2) (3) : ");
        scanf("%d",&isim);

        printf("Matineyi Seciniz (1) (2) (3) (4) (5) : ");
        scanf("%d",&matno);

        printf("Filmi Seciniz (R) (G) (B) : ");
        scanf("%s",&film);

        fprintf(salon,"%d",isim);
        fprintf(matine,"%d",matno);
        fprintf(film_isim,"%s",film);


        printf("Kac Kisilik Bilet Almak Istersiniz : ");
        scanf("%d",&bilet_say);

        printf("Aranizda Ogrenci Var Mi ? (E) (H) ");
        scanf("%s",&sorgu);

        if(sorgu=='E'||sorgu=='e')
        {
            printf("Kac ogrenci : ");
            scanf("%d",&ogrenci_say);
            tamsay=bilet_say-ogrenci_say;
        }

        else if (sorgu=='H'||sorgu=='h')
        {
            tamsay=bilet_say;
        }

        ucret=(tamsay*30)+(ogrenci_say*20);
        top_ucret=top_ucret+ucret;

        printf("\nTOPLAM TUTAR : %d\n",ucret);

        fscanf(tutar,"%d",&top_hasilat);
        top_hasilat+=top_ucret;
        fprintf(tutar,"%d",top_hasilat);

        printf("Toplam Hasilati Ogrenmek Ister Misiniz (E) (H) : ");
        scanf("%s",&hasilat_sorgu);

        if(hasilat_sorgu=='E'||hasilat_sorgu=='e')
        {
            fscanf(tutar,"%d",&top_hasilat);
            printf("TOPLAM HASILAT : %d\n",top_hasilat);
        }


        int s;
        for(s=1;s<bilet_say;s++)
        {
            fprintf(koltuk,"%d",s);
        }





        printf("%c nolu Matinede \n",fgetc(matine));
        printf("%c isimli Filmde \n",fgetc(film_isim));
        int i;
        for(i=0; i<6; i++)
        {
        printf("%c",fgetc(salon));
        }
        printf(" Nolu salonda\n");
        int a;
        for(a=0;a<bilet_say;a++)
        {
            printf("%c nolu koltuklar dolu.\n",fgetc(koltuk));
        }

        printf("\nIslem Yapmaya Devam Etmek Ister Misiniz (1-EVET) (2-HAYIR) :");
        scanf("%d",&islem_sorgu);


        remove("salon.txt");
        remove("film.txt");
        remove("matine.txt");
        remove("koltuk.txt");

        fclose(salon);
        fclose(matine);
        fclose(film_isim);
        fclose(tutar);


        system("CLS");
    }
    while(islem_sorgu==1);








}
