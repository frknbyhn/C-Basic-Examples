#include <stdio.h>
#include <stdlib.h>
#define VERGI 0.05

int main()
{
 int ay;
    printf("           ----------HANGI AY KAC GUN?----------\n");

    printf("Kacinci aydasiniz: ");

    scanf("%d", &ay);

    if (ay==1 || ay==3 || ay==5 || ay==7 || ay==8 || ay==9 || ay==11 )
    {
        printf("Girdiginiz ay 31 gun surmektedir.");
    }

    else if (ay==2 || ay==4 || ay==6 || ay==10  || ay==12 )
{
    printf("Girdiginiz ay 30 gun surmektedir.");
}


    else
{
    printf("1 ile 12 arasında bir sayı gir.");
}
}
