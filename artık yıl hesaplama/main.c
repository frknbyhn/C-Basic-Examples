#include <stdio.h>
#include <stdlib.h>

int main()
{   int yil;



    printf("                    ------------ARTIK YIL------------\n\n\n");

    printf("Hangi yilin artik yil oldugunu ogrenmek istiyorsunuz ? \n");
    scanf("%d", &yil);

    if (yil%4==0)
    {
        printf("Girdiginiz yil artik yildir.");
    }
    else
    {
        printf("Girdiginiz yil artil yil degildir.");
    }

}
