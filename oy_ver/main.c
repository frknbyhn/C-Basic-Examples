#include <stdio.h>
#include <stdlib.h>

int main()
{
    int yas;
    printf("             -----------------SECIM ZAMANI-----------------\n");
    printf("Oy kullanmak mi istiyorsunuz???\n");
    printf("Pekiiiii kac yasindasin : ");
    scanf("%d", &yas);

    if (yas>=18)
    {
        printf("Ooooo buyumussun sen, gec gec kullan oyunu");
    }
    else
    {
        printf("Buyu de gel");
    }
    return 0;
}
