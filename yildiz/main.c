#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int dizi[10]= { 19, 3, 15, 7, 11, 9, 13, 5, 17, 1 } ;

    for(i=0; i<10; i++)
    {
        printf("%d. eleman degeri = ",i);

        for(j=0;j<dizi[i];j++)
            printf("*");

        printf("\n");

    }

    return 0;
}
