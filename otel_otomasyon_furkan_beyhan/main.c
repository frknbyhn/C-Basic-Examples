#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sifirla,mevsim,odeme_tur,secim;
    int hafta,i,oda_tip,oda_sec,misafirsay,indirim,s_odalari=0,y_odalari=0,b_odalari=0,odasay=1,deneme=0,a=0;
    float ucret,tamucret;
    int oda[100];
    int standart[50];                // GEREKLİ DEĞİŞKENLERİ VE DİZİLERİ TANIMLADIM
    int ldeluxe[16];
    int deluxe[50];


                        printf("            -------------- OTEL OTOMASYONU --------------\n\n");



    do
    {
        printf("Hangi Mevsimde Konaklama Yapmak Istersiniz? \nSon Bahar Mevsimi 'S' \nBahar Mevsimi 'B' \nYaz Mevsimi 'Y'\n\nSeciminiz : ");
        scanf("%c",&mevsim);
        scanf("%c",&sifirla);     // GEREKLİ MEVSİM GİRİŞİ YAPILDI
        // SIFIRLA DIYE BIR SCANF DAHA TANıMLAMAMıN SEBEI
        // C DILINDEN KAYNAKLANAN BIR HATAYI DÜZELTMEK IÇINDIR. NE ZAMAN BILGI GIRIŞI ALSAM TEKRAR YAZDIM

        if (mevsim=='s' || mevsim=='S') // SONBAHAR MEVSIMI SEÇILDIĞINDE YAPILACAK IŞLEMLER
        {
            s_odalari++; // DOLULUK ORANINI YAZDIRMAK IÇIN s_odalari DIYE BIR DEĞİŞKEN OLUŞTURUP 1 ARTTIRIYORUM.
            do
            {
                printf("\nSon Bahar Aylarinin Kacinci Haftasinda Konaklama Yapicaksiniz : ");
                scanf("%d",&hafta);
                scanf("%c",&sifirla);   // 3 KERE DENEMEK IÇIN GEREKLI BIR DO-WHILE DÖNGÜSÜ OLUŞTURDUM
                deneme++;
                if (deneme>=3) return;
            }
            while(hafta>12 || deneme>3); // DENEME 3TEN HAFTA 12DEN KÜÇÜK VE EŞIT OLDUĞU SÜRECE ÇALIŞMASINI SAĞLAMAK IÇIN GEREKLI ŞARTLARI YAZDIM
        }
        else if (mevsim=='b' || mevsim=='B')
        {
            b_odalari++;    // DOLULUK ORANINI YAZDIRMAK IÇIN b_odalari DIYE BIR DEĞİŞKEN OLUŞTURUP 1 ARTTIRIYORUM.
            do
            {
                printf("\nBahar Aylarinin Kacinci Haftasinda Konaklama Yapicaksiniz : ");
                scanf("%d",&hafta);
                scanf("%c",&sifirla);
                deneme++;                   // 3 KERE DENEMEK İÇİN GEREKLI BIR DO-WHILE DÖNGÜSÜ OLUŞTURDUM
                if (deneme>=3) return;
            }
            while(hafta>12 || deneme>3);   // DENEME 3TEN HAFTA 12DEN KÜÇÜK VE EİIT OLDUĞU SÜRECE ÇALIŞMASINI SAĞLAMAK İÇİN GEREKLİ ŞARTLARI YAZDIM

        }
        else if (mevsim=='y' || mevsim=='Y')
        {
            y_odalari++;  // DOLULUK ORANINI YAZDIRMAK IÇIN y_odalari DIYE BIR DEĞİŞKEN OLUŞTURUP 1 ARTTIRIYORUM.
            do
            {
                printf("\nYaz Aylarinin Kacinci Haftasinda Konaklama Yapicaksiniz : ");
                scanf("%d",&hafta);
                scanf("%c",&sifirla);
                deneme++;                   // 3 KERE DENEMEK İÇİN GEREKLI BIR DO-WHILE DÖNGÜSÜ OLUŞTURDUM
                if (deneme>=3) return;
            }
            while(hafta>12 || deneme>3);    // DENEME 3TEN HAFTA 12DEN KÜÇÜK VE EŞİT OLDUĞU SÜRECE ÇALIŞMASINI SAĞLAMAK İÇİN GEREKLİ ŞARTLARI YAZDIM

        }
        else return;
        printf("\n\nOda Tipini Seciniz\nStandart Oda '1' Deluxe Oda '2' Large Deluxe Oda '3'\nSeciminiz : ");
        scanf("%d",&oda_tip);
        scanf("%c",&sifirla);         // ODA TİPİNİ SEÇTİRDİM FAKAT YİNE C DİLİNDEN KAYNAKLANAN BİR SORUN YÜZÜNDEN char YERİNE int OLARAK TANIMLAMAK ZORUNDA KALDIM

        if(oda_tip==1)  // ODA TİPİ 1 E EŞİTSE YAPILMASI GEREKENLERİ YAPMASI İÇİN OLUŞTURULAN İF KARAR KONTROL KOMUTU
        {
            for (i=1; i<=100; i++) // ODA ATAMAK İÇİN KURULAN FOR DÖNGÜSÜ
            {
                oda[i]=i;

                if(i%2==1) // STANDART ODALARI AYIRT ETMEK İÇİN KULLANILAN İF KARAR KONTROL KOMUTU
                {
                    standart[i]=i; // STANDART ODALARI ATAYAN KOD SATIRI
                    if (standart[i]==oda_sec) continue; // SEÇİLEN ODAYI BİR DAHA GÖSTERMEMEK İÇİN YAZILAN KOD SATIRI
                    printf("%d--",standart[i]); // STANDART ODALARI EKRANA GÖNDEREN KOD SATIRI
                }

            }

            printf("\nNo'lu odalar uygun birini seciniz : ");
            scanf("%d",&oda_sec);
            scanf("%c",&sifirla);  // ODA SEÇİLDİĞİNDE SEÇİLEN ODAYI DEĞİŞKENE ATAYAN KOD SATIRLARI

            if(oda_sec%2==0) return; // SEÇİLEN ODA GEREKLİ ŞARTLARI KARŞILAMAZ İSE PROGRAMI BİTİREN KOMUT SATIRI

            printf("\n\nKac kisi kalicaksiniz : ");
            scanf("%d",&misafirsay);
            scanf("%c",&sifirla);  // GİRİLEN MİSAFİR SAYISINI DEĞİŞKENE ATAYAN KOD SATIRI

            if(misafirsay>0 && misafirsay<=4) // MİSAFİR SAYISI 0-4 ARASI İSE YAPILACAK İŞLEMLER İÇİN YAZILAN İF KARAR KONTROL KOMUTU
            {
                if (mevsim=='s' || mevsim=='S')
                {

                    ucret = misafirsay*25*7;
                    tamucret=ucret;
                }
                else if (mevsim=='b' || mevsim=='B')
                {

                    ucret =misafirsay*40*7;     // SEÇİLEN MEVSİME GÖRE GEREKLİ ÜCRETLERİ HESAPLAYAN KOD SATIRLARI
                    tamucret=ucret;
                }
                else if (mevsim=='y' || mevsim=='Y')
                {
                    ucret =misafirsay*60*7;
                    tamucret=ucret;
                }
            }
            else if (misafirsay>4) // MİSAFİR SAYISI 4TEN BÜYÜKSE YAPILACAK İŞLEMLER İÇİN YAZILAN İF KARAR KONTROL KOMUTU
            {
                for(a=0; a<misafirsay-4; a=a+4) // KİŞİ SAYISINA GÖRE ODA SEÇTİRMEK İÇİN HAZIRLANAN FOR DÖNGÜSÜ
                {

                    printf("\nMalesef oda 4 kisiliktir. Lutfen bir oda daha seciniz : ");
                    scanf("%d",&oda_sec);
                    scanf("%c",&sifirla);            // SEÇİLEN ODALARI GEREKLİ DEĞİŞKENE ATAYAN KOD SATIRI
                    odasay++; // DOLULUK ORANINI HESAPLAMAK İÇİN YAZILAN KOD SATIRI

                }

                if (mevsim=='s' || mevsim=='S')
                {

                    ucret = misafirsay*25*7*odasay;
                    tamucret=ucret;
                }
                else if (mevsim=='b' || mevsim=='B')
                {

                    ucret = misafirsay*40*7*odasay;    // SEÇİLEN MEVSİME GÖRE GEREKLİ ÜCRETLERİ HESAPLAYAN KOD SATIRI
                    tamucret=ucret;
                }
                else if (mevsim=='y' || mevsim=='Y')
                {

                    ucret = misafirsay*60*7*odasay;
                    tamucret=ucret;
                }

            }
        }
        else if(oda_tip==2) // ODA TİPİ 2 YE EŞİTSE YAPILMASI GEREKENLERİ YAPMASI İÇİN OLUŞTURULAN İF KARAR KONTROL KOMUTU
        {
            for (i=1; i<=100; i++)    // ODA ATAMAK İÇİN KURULAN FOR DÖNGÜSÜ
            {
                oda[i]=i+1;

                if(i%2==0)
                {
                    if(i%6==0) continue; // 6 NIN KATLARI OLAN SAYILARI YAZDIRMAMAK İÇİN YAZILAN KOD SATIRI
                    deluxe[i]=i;    // DELUXE ODALARI AYIRT ETMEK İÇİN KULLANILAN İF KARAR KONTROL KOMUTU
                    if (deluxe[i]==oda_sec) continue;   // SEÇİLEN ODAYI BİR DAHA GÖSTERMEMEK İÇİN YAZILAN KOD SATIRI
                    printf("%d--",deluxe[i]);       // DELUXE ODALARI EKRANA GÖNDEREN KOD SATIRI

                }
            }
            printf("\nNo'lu odalar uygun birini seciniz : ");
            scanf("%d",&oda_sec);
            scanf("%c",&sifirla);   // ODA SEÇİLDİĞİNDE SEÇİLEN ODAYI DEĞİŞKENE ATAYAN KOD SATIRLARI
            if(oda_sec%2==1) return; // SEÇİLEN ODA GEREKLİ ŞARTLARI KARŞILAMAZ İSE PROGRAMI BİTİREN KOMUT SATIRI

            printf("\n\nKac kisi kalicaksiniz : ");
            scanf("%d",&misafirsay);
            scanf("%c",&sifirla);   // GİRİLEN MİSAFİR SAYISINI DEĞİŞKENE ATAYAN KOD SATIRI

            if(misafirsay>0 && misafirsay<=4)   // MİSAFİR SAYISI 0-4 ARASI İSE YAPILACAK İŞLEMLER İÇİN YAZILAN İF KARAR KONTROL KOMUTU
            {
                if (mevsim=='s' || mevsim=='S')
                {
                    ucret =misafirsay*50*7;
                    tamucret=ucret;
                }
                else if (mevsim=='b' || mevsim=='B')
                {
                    ucret =misafirsay*75*7;       // SEÇİLEN MEVSİME GÖRE GEREKLİ ÜCRETLERİ HESAPLAYAN KOD SATIRLARI
                    tamucret=ucret;
                }
                else if (mevsim=='y' || mevsim=='Y')
                {
                    ucret = misafirsay*90*7;
                    tamucret=ucret;
                }
            }
            else if (misafirsay>4)      // MİSAFİR SAYISI 4TEN BÜYÜKSE YAPILACAK İŞLEMLER İÇİN YAZILAN İF KARAR KONTROL KOMUTU
            {
                for(a=0; a<misafirsay-4; a=a+4)     // KİŞİ SAYISINA GÖRE ODA SEÇTİRMEK İÇİN HAZIRLANAN FOR DÖNGÜSÜ
                {
                    printf("\nMalesef oda 4 kisiliktir. Lutfen bir oda daha seciniz : ");
                    scanf("%d",&oda_sec);
                    scanf("%c",&sifirla);// SEÇİLEN ODA VE ODALARI GEREKLİ DEĞİŞKENE ATAYAN KOD SATIRI
                    odasay++;       // DOLULUK ORANINI HESAPLAMAK İÇİN YAZILAN KOD SATIRI
                }


                if (mevsim=='s' || mevsim=='S')
                {
                    ucret = misafirsay*50*7;
                    tamucret=ucret;
                }
                else if (mevsim=='b' || mevsim=='B')
                {
                    ucret =misafirsay* 75*7;       // SEÇİLEN MEVSİME GÖRE GEREKLİ ÜCRETLERİ HESAPLAYAN KOD SATIRI
                    tamucret=ucret;
                }
                else if (mevsim=='y' || mevsim=='Y')
                {
                    ucret =misafirsay*90*7;
                    tamucret=ucret;
                }
            }


        }
        else if(oda_tip==3)     // ODA TİPİ 3 E EŞİTSE YAPILMASI GEREKENLERİ YAPMASI İÇİN OLUŞTURULAN İF KARAR KONTROL KOMUTU
        {
            for (i=1; i<=100; i++)
            {
                oda[i]=i+1;

                if(i%6==0)
                {
                    ldeluxe[i]=i; // LARGE DELUXE ODALARI AYIRT ETMEK İÇİN KULLANILAN İF KARAR KONTROL KOMUTU
                    if (ldeluxe[i]==oda_sec) continue;   // SEÇİLEN ODAYI BİR DAHA GÖSTERMEMEK İÇİN YAZILAN KOD SATIRI
                    printf("%d--",ldeluxe[i]);       // LARGE DELUXE ODALARI EKRANA GÖNDEREN KOD SATIRI
                }
            }
            printf("\nNo'lu odalar uygun birini seciniz : ");
            scanf("%d",&oda_sec);
            scanf("%c",&sifirla);       // ODA SEÇİLDİĞİNDE SEÇİLEN ODAYI DEĞİŞKENE ATAYAN KOD SATIRLARI
            if(oda_sec%6!=0) return;

            printf("\n\nKac kisi kalicaksiniz : ");
            scanf("%d",&misafirsay);
            scanf("%c",&sifirla);       // GİRİLEN MİSAFİR SAYISINI DEĞİŞKENE ATAYAN KOD SATIRI

            if(misafirsay>0 && misafirsay<=7)   // MİSAFİR SAYISI 0-7 ARASI İSE YAPILACAK İŞLEMLER İÇİN YAZILAN İF KARAR KONTROL KOMUTU
            {
                if (mevsim=='s' || mevsim=='S')
                {
                    ucret =250;
                    tamucret=ucret;
                }
                else if (mevsim=='b' || mevsim=='B')
                {
                    ucret =300;         // SEÇİLEN MEVSİME GÖRE GEREKLİ ÜCRETLERİ HESAPLAYAN KOD SATIRLARI
                    tamucret=ucret;
                }
                else if (mevsim=='y' || mevsim=='Y')
                {

                    ucret =400;
                    tamucret=ucret;
                }
            }
            else if (misafirsay>7)       // MİSAFİR SAYISI 7DEN BÜYÜKSE YAPILACAK İŞLEMLER İÇİN YAZILAN İF KARAR KONTROL KOMUTU
            {
                for(a=0; a<misafirsay-7; a=a+7) // BİR TANE FAZLADAN ODA SEÇMEMEK İÇİN MİSAFİR SAYISINDAN 7Yİ ÇIKARDIM
                {
                    printf("\nMalesef oda 7 kisiliktir. Lutfen bir oda daha seciniz :");
                    scanf("%d",&oda_sec);
                    scanf("%c",&sifirla);    // ODA SEÇİLDİĞİNDE SEÇİLEN ODAYI DEĞİŞKENE ATAYAN KOD SATIRLARI
                    odasay++;       // DOLULUK ORANINI VE ÜCRETİ HESAPLAMAK İÇİN YAZILAN KOD SATIRI
                }
                if (mevsim=='s' || mevsim=='S')
                    ucret = 250*odasay;
                else if (mevsim=='b' || mevsim=='B')
                    ucret = 300*odasay;     // SEÇİLEN MEVSİME GÖRE GEREKLİ ÜCRETLERİ HESAPLAYAN KOD SATIRLARI
                else if (mevsim=='y' || mevsim=='Y')
                    ucret = 400*odasay;
            }
        }
        else return;

        printf("\nOdeme seklinizi giriniz.\nOn odemeli islem 'O' Havele islemi 'H' Standart islem 'S'\nSECIMINIZ : ");
        scanf("%c",&odeme_tur);
        scanf("%c",&sifirla);       // GİRİLEN ÖDEME ŞEKLİNİ DEĞİŞKENE ATAYAN KOD SATIRLARI

        if(odeme_tur=='o'||odeme_tur=='O')
            ucret=ucret*15/100; // ÖDEME ŞEKLİ ÖN ÖDEMELİ ÖDEMEYE EŞİTSE YAPILACAK İŞLEMLER

        else if(odeme_tur=='h'||odeme_tur=='H') // ÖDEME ŞEKLİ HAVALEYE EŞİTSE YAPILACAK İŞLEMLER
        {
            if (misafirsay>3 && misafirsay<=5)
            {
                ucret=ucret/misafirsay;
                ucret=ucret/2;
                ucret=tamucret-ucret;
            }
            else if(misafirsay>5)                           // SEÇİLEN İŞLEME GÖRE HESAPLANAN ÜCRETLER :
            {
                ucret=ucret/misafirsay;
                ucret=ucret*3.0/4.0;        // ÖNCE 1 KİŞİNİN ÜCRETİNİ HESAPLADIM İNDİRİMİ SAĞLADIM
                ucret=tamucret-ucret;       // DAHA SONRA TAM ÜCRETTEN ÇIKARDIM
            }
            else ucret=misafirsay*ucret;

        }
        else if(odeme_tur=='s'||odeme_tur=='S')     // ÖDEME ŞEKLİ STANDART İSE YAPILACAK İŞLEMLER
            ucret=misafirsay*ucret;         // ÜCRETİ HESAPLAYAN KOD SATIRI
        else return;
        printf("\nOdenecek Tutar : %.2f $\n\n",ucret);
        printf("\n\n\nOTELIMIZIN SON BAHAR AYINDAKI\nDOLULUK ORANI %%%d",s_odalari);
        printf("\n\n\nOTELIMIZIN BAHAR AYINDAKI\nDOLULUK ORANI %%%d",b_odalari);    // OTELDEKİ DOLULUK ORANLARINI VEREN EKRAN GÖRÜNTÜLERİ
        printf("\n\n\nOTELIMIZIN YAZ AYINDAKI\nDOLULUK ORANI %%%d",y_odalari);


        printf("\n\n\nYeni bir rezervasyon yapicak misiniz : ");
        do
        {
            scanf("%c",&secim);         // BURADA YAPTIĞIM İŞLEMİ İNTERNETTE ARAŞTIRARAK BULDUM                      // BKNZ: http://www.cagataycebi.com/programming/c_programming/c_programming_5.html
            scanf("%c",&sifirla);       // C DİLİNDEN KAYNAKLANAN BİR SORUNDAN DOLAYI BÖYLE YAPMAK GEREKLİYMİŞ       // CTRL F DEN devam_mi DİYEREK ARATIRSANIZ BULABİLİRSİNİZ
        }
        while(secim == '\n');
        printf("\n");
        deneme=0;
    }
    while(secim == 'E' || secim == 'e'); // BÜTÜN KODLARI İÇİNE ALAN DO WHİLE DÖNGÜSÜNÜN SONU
    // TEKRAR REZERVASYON YAPMAK İÇİN KULLANILAN DO WHİLE DÖNGÜSÜNÜN SONU DA DİYEBİLİRİM.
    return 0;
}
