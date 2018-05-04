#include <stdio.h>
#include <stdlib.h>

int main()
{
        printf("Odeme seklinizi giriniz.\nOn odemeli Islem 'O' Havale Islemi 'H' Standart Islem 'S'\nSECIMINIZ : ");
        scanf("%c",&odeme_tur);

        if (odeme_tur == 'o' || odeme_tur = 'O')
        {
            ucret=ucret*15/100;
        }
        else if (odeme_tur=='h' || odeme_tur=='H')
        {
            if (misafirsay>3 && misafirsay<=5)
            {
                indirim=ucret/2;
                ucret=misafirsay-1*ucret;
                ucret=indirim+ucret;
            }
            else if(misafirsay>5)
            {
                indirim=ucret*3/4;
                ucret=misafirsay-1*ucret;
                ucret=indirim+ucret;
            }
        }
        else
        ucret=misafirsay*ucret;

        else if (odeme_tur=='s'||odeme_tur=='S')
            ucret=misafirsay*ucret;

        printf("Yeni bir rezervasyon yapıcak mısınız : ");
		//C'de tek karakter okuma işlemi biraz sıkıntılı
		//olduğundan, burada da bir do while kullandık.
		do {
			scanf("%c",&secim);
		}while( secim == '\n' );
		printf("\n");
}
while( secim == 'E' || secim == 'e' );
return 0;
}
