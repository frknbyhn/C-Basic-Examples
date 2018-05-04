#include <stdio.h>
#include <stdlib.h>

int main()
{
    char harf;
    printf("                ---------------------KLAVYEDEN GIRILEN HARF NE?---------------------\n");

    printf("Bir harf girer misin yakisikli ?");
    scanf("%d", &harf);

    if ( harf == 'A' || harf == 'E'|| harf == 'I' || harf == 'O' || harf == 'U' )
    {
        printf("Sesli harftir.");
    }
    else
        printf("Sessiz harftir.");


    return 0;
}
